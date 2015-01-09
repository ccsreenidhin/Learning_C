 #include<stdio.h>
 #include<conio.h>
 #include<alloc.h>
 void create();
 void disp(struct node *start,struct node *end);
 int n;
 struct node
 {
  int data;
  struct node *next,*prev;
  }*p,*q,*start=NULL,*end,*t;
 void main()
 {
  int t=0,i,j;
  clrscr();
  create();
  disp(start,end);

  for(i=0;i<n;i++)
  {
  p=start;
  for(j=0;j<n-1;j++)
  {
   if(p->data>p->next->data)
   {
    t=p->data;
    p->data=p->next->data;
    p->next->data=t;
   }
   p=p->next;
   }
   }
   printf("aftr srtg\n");
   disp(start,end);
  getch();
 }
  void create()
  {
   int i,g;
   struct no`de *p;
   struct node *q;
   clrscr();
   printf("enter the numbr of nodes : ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    p=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&p->data);
    p->next=NULL;
    p->prev=NULL;
    if(start==NULL)
    {
     start=p;
    }
    else
    {
     q->next=p;
     p->prev=q;
    }
     q=p;
     end=p;
    }
   }
    void disp(struct node *start,struct node *end)
    {
     struct node *p;
     struct node *q;
     p=start;
     while(p!=NULL)
     {
      printf("%d=>",p->data);
      p=p->next;
     }
     printf("\n");
     p=end;
     while(p!=NULL)
     {
      printf("%d=>",p->data);
      p=p->prev;
     }
    }








