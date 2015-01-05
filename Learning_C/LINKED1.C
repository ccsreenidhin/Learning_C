#include<stdio.h>
#include<alloc.h>
struct trial
{
 int data;
 struct trial *nxt;
};
void main()
{
 int i,n,s;
 struct trial *p,*q,*start;
 clrscr();
 printf("Enter number of nodes: ");
 scanf("%d",&n);
 printf("\nEnter the numbers: ");
 //scanf("%d",&s);
 for(i=0;i<n;i++)
 {
  p=(struct trial*)malloc(sizeof(struct trial));
  scanf("%d",&p->data);
  p->nxt=NULL;
  if(i==0)
  start=p;
  else
  q->nxt=p;
  q=p;
 }

// printf("\nStart address= %u",start);
 p=start;
// printf("\nAddress of P= %u",p);
 while(p!=NULL)
 {
  printf("%d=>",p->data);
  p=p->nxt;
 }
 getch();
}