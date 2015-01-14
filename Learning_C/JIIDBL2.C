 #include<stdio.h>
 #include<conio.h>
 #include<alloc.h>
 void create();
 void disp(struct node *start,struct node *end);
 void add(struct node *start);
 void del(struct node *start);
 int n;
 struct node
 {
  int data;
  struct node *next,*prev;
  }*p,*q,*start=NULL,*end,*t;
 void main()
 {
  int op;
  char g;
  clrscr();
  do
  {
  printf("choose:\n1.create ");
  printf("choose:\n2.display");
  printf("choose:\n3.add");
  printf("choose:\n4.del");
  printf("choose:\n5.exit\n");
  scanf("%d",&op);
  switch(op)
  {
   case 1:create();
   break;
   case 2:disp(start,end);
   break;
   case 3:add(start);
   break;
   case 4:del(start);
   break;
   case 5:exit();
   break;
   default : printf("invalid number");
  }
  fflush(stdin);
  printf("do u wnt tp cntn y\s");
  scanf("%c",&g);
  }
  while(g=='y');
   getch();
   }
    void create()
    {
     int i;
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
    void add(struct node *p)
    {
     int i,c,j,n,b;
     struct node *q;
     printf("position of num to be add");
     scanf("%d",&c);

      printf("new num");
      q=(struct node *)malloc(sizeof(struct node));
      scanf("%d",&q->data);
      if(c==1)
      {
	q->next=p;
	p->prev=q;
	start=q;
	start->prev=NULL;
       }
       else
       {
      for(i=0;i<c-2;p=p->next,i++);
      q->next=p->next;

      p->next->prev=q;
      p->next=q;
      q->prev=p;
      q->prev=p;
      end=q;
      }
     }
    void del(struct node *p)
    {
     int d,b,i;
     struct node *q;
     printf("position to be deleted");
     scanf("%d",&d);
     p=start;
     if(d==1)
     {
      start=p->next;
      start->prev=NULL;
     }
     else if(d==n)
     {
     for(i=0;i<d-1;i++)
      {
       p=p->next;
      }

     end=p->prev;
     end->next=NULL;
     }
     else
     {
      for(i=0;i<d-2;i++)
      {
       p=p->next;
      }
      t=p->next;
      t->next->prev=p;
      p->next=t->next;

     }
     }




