 #include<stdio.h>
 #include<conio.h>
 #include<alloc.h>
 struct node
 {
  int data;
  struct node *next,*prev;
 }*p,*q,*start=NULL,*end;
 void main()
 {
  int i,n;
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
   p=start;
   while(p!=NULL)
   {
    printf("%d=>",p->data);
    p=p->next;
    }
    p=end;
    while(p!=NULL)
    {
     printf("%d=>",p->data);
     p=p->prev;
    }
    getch();
    }
