#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct employee
{
 struct employee *next,*previous;   //self referential pointers
 int salary;
}*ptr,*pt,*start=NULL,*end,*r;         //structure variables

void creation();
void display();
void sorting();

void main()
{
  int i=0,x;
  clrscr();

 do
 {
  printf("\nPress 1 for creation");
  printf("\nPress 2 for display");
  printf("\nPress 3 for sorting");
  printf("\nEnter your choice: ");
  fflush(stdin);
  scanf("%d",&x);

  switch(x)
  {
   case 1:
	  i++;
	  creation();
	  break;
   case 2:
	  display(i);
	  break;
   case 3:
	  printf("\nAfter sorting:\n");
	  sorting(i);
	  break;
   default:
	  printf("\nPlease enter a valid choice\n");
	  break;
   }

  printf("\nIf you want to continue, press Y: ");
  fflush(stdin);
  scanf("%c",&x);
 }while(x=='y');
 getch();
}


void creation()
{
 if(start==NULL)
 {
  printf("\nEnter the salary: ");
  ptr=(struct employee*)malloc(sizeof(struct employee));
  scanf("%d",&ptr->salary);
  ptr->next=NULL;
  ptr->previous=NULL;
  start=ptr;
  end=ptr;
 }
 else
 {
  printf("\nEnter the salary: ");
  pt=(struct employee*)malloc(sizeof(struct employee));
  scanf("%d",&pt->salary);
  pt->next=NULL;
  pt->previous=ptr;
  ptr->next=pt;
  ptr=pt;
  end=pt;
 }

}

 void display(int n)
 {
  printf("\nNumber of nodes: %d\n",n);
  printf("\nSalary:  ");
  ptr=start;
  while(ptr!=NULL)
  {
   printf("%d->",ptr->salary);
   ptr=ptr->next;
  }
 }

void sorting(int n)
{
  int i;
  printf("Number of nodes: %d\n",n);

for(i=0;i<n;i++)
{
  ptr=start;
  pt=ptr->next;
  if(ptr->salary>pt->salary)
  {
   ptr->next=pt->next;
   ptr->previous=pt;
   pt->next=ptr;
   start=pt;
  }
  ptr=start;
  pt=ptr->next;
  r=pt->next;
  while(r!=NULL)
  {
   if(pt->salary>r->salary)
    {
     ptr->next=r;
     pt->next=r->next;
     r->previous=ptr;
     r->next=pt;
     pt->previous=r;
    }
    end=r;
    ptr=ptr->next;
    r=ptr->next;
    pt=ptr->next;
    r=pt->next;

  }
}
  for(ptr=start;ptr!=NULL;ptr=ptr->next)
  printf("%d ",ptr->salary);

 /* for(ptr=end;ptr!=NULL;ptr=ptr->previous)
  printf("%d ",ptr->salary);*/

}