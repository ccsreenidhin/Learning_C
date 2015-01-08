#include<stdio.h>
#include<alloc.h>
#include<string.h>
struct student
{
 char name[10];
 int m1,m2;
 int total;
}*s;
void sort(struct student *s);
void main()
{
 int i;
 struct student *g;
 s=(struct student*)malloc(3*sizeof(struct student));
 g=s;
 clrscr();
 for(i=0;i<3;i++)
 {
  printf("Student %d details\n",i+1);
  printf("Enter name: ");
  fflush(stdin);
  gets(s->name);
  printf("Enter m1,m2: ");
  fflush(stdin);
  scanf("%d%d",&s->m1,&s->m2);
  printf("\n");
  s->total=(s->m1+s->m2);
  s++;
 }
 s=g;
 sort(s);
 printf("\nDetails in descending order:\n");
 for(i=0;i<3;i++)
 {
  printf("\nName: %s",s->name);
  printf("\nTotal mark: %d",s->total);
  s++;
 }
 getch();
}

void sort(struct student *c)
{
 int i,j,t=0;
 struct student *d;
 char temp[10];
 d=c;
 for(j=0;j<3;j++)
 {
  c=d;
  for(i=0;i<2;i++)
  {
   if((c->total)<(c+1)->total)
   {
    t=c->total;
    c->total=(c+1)->total;
    (c+1)->total=t;
    strcpy(temp,c->name);
    strcpy(c->name,(c+1)->name);
    strcpy((c+1)->name,temp);
    c++;
   }
   else
   c++;
  }
 }
}