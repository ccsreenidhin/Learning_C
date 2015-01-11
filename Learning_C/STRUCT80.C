#include<stdio.h>
#include<alloc.h>
struct student
{
 char name[10];
 int m1,m2;
 int total;
}*s,*k,*j;
struct student* topper(struct student *s);
void main()
{
 int i;
 s=(struct student*)malloc(5*sizeof(struct student));
 k=s;
 clrscr();
 for(i=0;i<3;i++)
 {
  printf("Student %d details",i+1);
  printf("\nEnter name: ");
  fflush(stdin);
  gets(s->name);
  printf("Enter m1,m2: ");
  fflush(stdin);
  scanf("%d%d",&s->m1,&s->m2);
  printf("\n");
  s->total=(s->m1+s->m2);
  s++;
 }
  s=k;
  j=topper(s);
  printf("\nTopper:\n");
  printf("\nName: %s",j->name);
  printf("\nTotal mark: %d",j->total);
  getch();
}

struct student* topper(struct student *m)
{
 struct student *k;
 int i,temp=0,p=0;
 k=m;
 for(i=0;i<3;i++)
 {
  if(m->total>temp)
  {
   temp=m->total;
   m++;
  }
  else
  m++;
 }
 m=k;
 for(i=0;i<3;i++)
 {
  if(temp==m->total)
   {
    p=1;
    break;
   }
   else
   m++;
 }
 if(p==1)
 return m;
}