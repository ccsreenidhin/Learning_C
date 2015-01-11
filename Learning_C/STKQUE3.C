#include<stdio.h>
#include<alloc.h>
struct student
{
 int marks;
 struct student *next;  	//self referential pointer
 }*p,*start=NULL,*q,*k;
 //void push();
 void push();
 void pop();
 void pop2();
 void display();
 void main()
 {

  int i,j,a,v,m;
  char x;
  clrscr();
  do
  {
   //printf("\nPress 1 for creation");
   printf("\nPress 1 to push a node");
   printf("\nPress 2 to pop the first node from queue");
   printf("\nPress 3 to pop the last node from stack");
   printf("\nPress 4 to display nodes");
   printf("\nEnter your choice: ");
   fflush(stdin);
   scanf("%d",&i);
   switch(i)
   {
    case 1:
	   push();
	   break;
    case 2:
	   printf("\nPopping the first node from the queue...");
	   pop();
	   break;
    case 3:
	   printf("\nPopping the last node from the stack...");
	   pop2();
	   break;
    case 4:
	   printf("\nThe nodes are..");
	   display();
	   break;
    default:
	   printf("\nEnter a valid choice");
	   break;
    }
    printf("\n\nIf you want to continue,press 'y': ");
    fflush(stdin);
    scanf("%c",&x);
    }while(x=='y');
    getch();
  }

 void push()
 {
  printf("\nEnter the node: ");
  p=(struct student*)malloc(sizeof(struct student));
  scanf("%d",&p->marks);
  p->next=NULL;
  if(start==NULL)
  start=p;
  else
  q->next=p;
  q=p;

  printf("\nPushing a node to the stack...");

  printf("\n\nStarting address when pushing: %d",start);

 }

 void pop()
 {
  //struct student *j
  //j=start;
  p=start;
  start=p->next;
  free(p);
  display();
 }
  void pop2()
 {
  struct student *q;
  printf("\n\nStarting address when popping: %d\n",start);

  for(p=start;p->next!=NULL;p=p->next)
  q=p;
  free(p);
  q->next=NULL;
  display(start);
 }
 void display()
 {
  printf("\n\nStarting address when displaying: %d\n",start);
  p=start;
  //q==p;
  while(p!=NULL)
  {
   printf("%d..",p->marks);
   p=p->next;
  }
 }