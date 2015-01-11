#include<stdio.h>
#include<alloc.h>

struct student
{
 struct student *next;			//self referential pointer
 int mark;
}*p,*start=NULL,*q;                     //structure variables

void creation();
void display();
void sorting();

void main()
{
 int i,n=0;
 char x;
 clrscr();
 do
 {
  printf("\nPress 1 to create nodes");
  printf("\nPress 2 for display");
  printf("\nPress 3 for sorting");
  printf("\nEnter your choice: ");
  fflush(stdin);
  scanf("%d",&i);
  switch(i)
  {
   case 1:
	  n++;
	  creation();
	  break;
   case 2:
	  display(n);
	  break;
  case 3:
	  sorting(n);
	  break;
   default:
	  printf("\nPlease enter a valid choice\n");
	  break;
   }
   printf("\nIf you want to continue,press y: ");
   fflush(stdin);
   scanf("%c",&x);
  }while(x=='y');
 getch();
}

void creation()
{
 int i=0;
 p=(struct student*)malloc(sizeof(struct student));
 printf("\nEnter the mark: ");
 fflush(stdin);
 scanf("%d",&p->mark);
 p->next=NULL;
 if(start==NULL)
  start=p;
 else
  q->next=p;
  q=p;
}


void display(int n)
{
 p=start;
 printf("\nMarks: ");
 while(p!=NULL)
 {
  printf("%d->",p->mark);
  p=p->next;
 }
 printf("\nNumber of nodes: %d",n);
}

void sorting(int n)
{
 int i,j;
 struct student *pre;
 printf("\nNumber of nodes= %d",n);
 pre=start;
 for(i=0;i<n;i++)
 {
   p=start;
   for(j=0;j<n-1;j++)
   {
    q=p->next;
    if(p->mark>q->mark)
    {
     if(p==start)
     {
      p->next=q->next;
      q->next=p;
      start=q;
      p=q;
     }
     else
     {
      p->next=q->next;
      q->next=p;
      p=q;
      pre->next=p;
     }
    }                                //closing main if loop
     pre=p;
     p=p->next;
   }                                 //closing first for loop
 }                                   //closing second for loop
}                                    //closing the function