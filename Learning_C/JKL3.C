#include<stdio.h>
#include<conio.h>
struct node
{
int a;
struct node *p;
}*head,*temp,*start,*h;
void addnode(int);
void display();
void cls();
void crs();
void main()
 {
  int n;
  char ch,c;
  head=NULL;
  h=NULL;
  clrscr();

  do
  {
   printf("enter the no");
   scanf("%d",&n);
   addnode(n);
   printf("enter o if no more to add");
   fflush(stdin);
   ch=getchar();
  }
  while(ch!='o');

  display();
  getch();
}

void addnode(int n)
 {
   temp=(struct node *)malloc(sizeof(struct node));
   temp->a=n;
   temp->p=NULL;
   if(head==NULL)
    {
      start=temp;
      head=temp;
    }
  else
    {
      head->p=temp;
      head=head->p;
    }
    }


void display(void)
{
  struct node *current;
  current=start;
  printf("\n");
  while(current!=NULL)
   {
     printf("%d",(current->a));
     current=(current->p);
   }
}

void cls()
 {
 struct node *tem;
 tem=(struct node *)malloc(sizeof(struct node));
   tem->a=n;
   tem->p=NULL;
for(i=0;i!=NULL;i++)
   {
   temp=temp->ptr;
   }
   if(temp==NULL)

    {
      start=temp;
      head=temp;
    }
  else
    {
      head->p=temp;
      head=head->p;
    }
    }

