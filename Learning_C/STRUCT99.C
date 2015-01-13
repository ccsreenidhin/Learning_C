#include<stdio.h>
#include<alloc.h>
#include<string.h>
struct student
{
 char name[10];
 int m1,m2;
 int total;
}*s;
void sort(struct student *h);
void main()
{
 int i;
 struct student *g;
 s=(struct student*)malloc(5*sizeof(struct student));
 g=s;
 clrscr();
 for(i=0;i<5;i++)
 {
  printf("Student %d details\n",i+1);
  printf("Enter name: ");
  fflush(stdin);
  gets(s->name);
  printf("Enter m1,m2: ");
  fflush(stdin);
  scanf("%d%d",&s->m1,&s->m2);
  s->total=s->m1+s->m2;
  printf("\n");
  s++;
 }
 s=g;
 sort(s);
 getch();
}

void sort(struct student *v)
{
 int i,j,t=0,p=0,q=0;
 char temp[10];
 struct student *g;
 g=v;
 for(i=0;i<5;i++)
 {
  v=g;
  for(j=0;j<4;j++)
  {
   if((v->total)<(v+1)->total)
    {
     t=v->total;
     v->total=(v+1)->total;
     (v+1)->total=t;

     p=v->m1;
     v->m1=(v+1)->m1;
     (v+1)->m1=p;
     q=v->m2;
     v->m2=(v+1)->m2;
     (v+1)->m2=q;

     strcpy(temp,v->name);
     strcpy(v->name,(v+1)->name);
     strcpy((v+1)->name,temp);
     v++;
    }
   else
   v++;
  }
 }
 v=g;
 printf("\t\tMarklist\t\t\n");
 printf("  Name\tm1\tm2\tT0tal\n");
 for(i=0;i<5;i++)
 {
  printf("%d.",i+1);
  printf("  %s",v->name);
  printf("\t%d\t%d",v->m1,v->m2);
  printf(" \t%d",v->total);
  printf("\n");
  v++;
 }
}