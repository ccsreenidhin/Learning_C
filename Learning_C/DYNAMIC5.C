#include<stdio.h>
#include<alloc.h>
void descending(int *p,int *m);
void main()
{
 int *p,*m,i;
 clrscr();
 p=(int*)malloc(10*sizeof(int));
 m=p;
 printf("Enter 10 numbers: ");
 for(i=0;i<10;i++)
 {
  scanf("%d",p);
  p++;
 }
 p=m;
 descending(p,m);
 getch();
}

void descending(int *s,int *d)
{
 int *t,i,j;
 for(i=0;i<10;i++)
 {
  s=d;
  for(j=0;j<10;j++)
  {
   if(*s<*(s+1))
   {
    *t=*(s+1);
    *(s+1)=*s;
    *s=*t;
   }
   else
   s++;
  }
 }
 s=d;
 printf("\nNumbers in descending order: ");
 for(i=0;i<10;i++)
 {
  printf("%d ",*s);
  s++;
 }
}