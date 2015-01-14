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
  int g=0,i;
  clrscr();
  create();
  disp(start,end);
  p=start;
  for(i=0;i<n;i++)
  {
  if(g<p->data)
   {
   g=p->data;
   }
   p=p->next;
   }
  printf("\n grtst num is : ");
  printf("%d",g);
  getch();
 }
  void create()
  {
   int i,g;
   struct node *p;
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








