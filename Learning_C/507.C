#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct list
{
int data;
struct list *nxt,*prv;
}*p=NULL,*start,*q,*r,*end;
void main()
{
  int i,n;
  char f;
  clrscr();
  printf("enter the data\n");
  for(i=0;i<5;i++)
  {
    if(p==NULL)
    {
	p=(struct list*)malloc(sizeof(struct list));
	scanf("%d",&p->data);
	p->prv=NULL;
	p->nxt=NULL;
	start=p;
    }
    else
    {
    q=(struct list*)malloc(sizeof(struct list));
    scanf("%d",&q->data);
    q->prv=p;
    q->nxt=NULL;
    p->nxt=q;
    p=q;
    end=q;
    }
  }
  for(p=start;p!=NULL;p=p->nxt)
  {
  printf("%d=> ",p->data);
  }
  printf("\n");
  for(p=end;p!=NULL;p=p->prv)
  {
  printf("%d<= ",p->data);
  }
  printf("after sorting\n");
  for(i=0;i<5;i++)
  {
  p=start;
  q=p->nxt;
  if(p->data>q->data)
  {
  p->nxt=q->nxt;
  p->prv=q;
  q->nxt=p;
  start=q;
  }
  p=start;
  q=p->nxt;
  r=q->nxt;
  while(r!=NULL)
  {
  if(q->data>r->data)
  {
  p->nxt=r;
  q->nxt=r->nxt;
  r->prv=p;
  r->nxt=q;
  q->prv=r;
  }
  end=r;
  p=p->nxt;
  q=p->nxt;
  r=q->nxt;

  }
  }
  for(p=start;p!=NULL;p=p->nxt)
  {
  printf("%d ",p->data);
  }
 for(p=end;p!=NULL;p=p->prv)
  {
  printf("%d ",p->data);
  }

  getch();
  }