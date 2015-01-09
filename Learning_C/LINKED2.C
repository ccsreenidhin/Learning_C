#include<stdio.h>
#include<alloc.h>
struct student
{
 int marks;
 struct student *next;  /*self referential pointer*/
}*p,*q,*start,*k;       /*structure variables(pointers)*/

//function declarations
//
void creation();
void display(struct student *start);
void add(struct student *start,int v);
void del(struct student *start,int a);
//

void main()
{
 int i,j,a,v,m;
 char x;
 //struct student *p,*q,*start;
 clrscr();
do
{
 printf("\nPress 1 for creation");
 printf("\nPress 2 for display");
 printf("\nPress 3 to add a new node");
 printf("\nPress 4 to delete");
 printf("\nEnter your choice: ");
 fflush(stdin);
 scanf("%d",&i);
 switch(i)
 {
  case 1:
	 creation();
	 break;
  case 2:
	 printf("\nThe nodes are..");
	 display(start);
	 break;

  case 3:
	 printf("\nEnter the location: ");
	 scanf("%d",&v);
	 add(start,v);
	 break;

  case 4:
	 printf("\nEnter the location to delete: ");
	 scanf("%d",&m);
	 del(start,m);
	 break;

  default:
	 printf("\nPlease enter a valid choice");
	 break;
 }

 printf("\nIf you want to continue,press 'y': ");
 fflush(stdin);
 scanf("%c",&x);
}while(x=='y');
 getch();
}
void creation()
{
 int i,a;
 //struct student *start,*q;
  printf("\nEnter the number of nodes: ");
  fflush(stdin);
  scanf("%d",&a);

 printf("\nEnter the marks: ");
 for(i=0;i<a;i++)
 {
  p=(struct student*)malloc(sizeof(struct student));
  scanf("%d",&p->marks);
  p->next=NULL;
  if(i==0)
  start=p;
  else
  q->next=p;
  q=p;
 }
  printf("\nStart address: %d",start);
}

void display(struct student *start)
{
 p=start;
 while(p!=NULL)
 {
  printf("%d..",p->marks);

  p=p->next;
 }
}

void add(struct student *p,int v)
{
 int i;

 struct student *g;
 if(v==1)
 {
  g=(struct student*)malloc(sizeof(struct student));
  printf("\nEnter the new mark: ");
  scanf("%d",&g->marks);
  g->next=p;
 }
else
{
 for(i=0;i<v-2;i++)
 {
  p=p->next;
 }
  k=(struct student*)malloc(sizeof(struct student));
  printf("\nEnter the new mark: ");
  scanf("%d",&k->marks);
  k->next=p->next;
  p->next=k;
 }
}
void del(struct student *p,int m)
{
 struct student *q;
 int i;

 printf("\nStart address: %d",start);

 for(i=0;i<m-2;i++,p=p->next);
  q=p->next;
  p->next=q->next;
  //p->next=p->next->next;
}