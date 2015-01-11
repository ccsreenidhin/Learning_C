#include<stdio.h>
void add(int);
void cls(void);
void crs(void);
void print(void);
struct node
{
int a;
struct node *p;
}*head,*temp,*start;
void main()
{
int n,o;
char ch;
clrscr();
head=NULL;
op:
printf("enter the operation-add=1,circlr lt shift=2,circlr rt shift=3,print=4");
scanf("%d",&o);
switch(o)
{
case 1:
      {
      do
      {
      printf("enter the no to be added");
      scanf("%d",&n);
      add(n);
      printf("enter f if finished adding");
      fflush(stdin);
      ch=getchar();
      }while(ch!='f');
      break;
      }
case 2:{cls(); break;}
case 3:{crs(); break;}
case 4:{print(); break;}
default:printf("wrong input");
}
printf("\nenter g to select operation");
fflush(stdin);
ch=getchar();
if(ch=='g') goto op;
getch();
}

void add(int n)
{
temp=(struct node *)malloc(sizeof(struct node));
temp->a=n;
temp->p=NULL;
if(head==NULL)
 {
  head=temp;
  start=head;
 }
else
 {
  head->p=temp;
  head=head->p;
 }
}

void cls(void)
{
struct node *tem,*current,*t,*n;
current=start;
t=start;
n=start->p;
while(current!=NULL)
{
tem=current;
current=current->p;
}
tem->p=t;
t->p=NULL;
start=n;
}

void crs()
{
struct node *tem,*current;
current=start;
while(current->p!=NULL)
{
tem=current;
current=current->p;
}
current->p=start;
tem->p=NULL;
start=current;
}

void print()
{
struct node *current;
current=start;
while(current!=NULL)
{
printf("%d",current->a);
current=current->p;
}
}