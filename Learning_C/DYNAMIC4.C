#include<stdio.h>
#include<alloc.h>
void main()
{
 int *p,*s,*t,i,j;
 clrscr();
 p=malloc(10*sizeof(int));
 s=p;
 printf("Enter 10 numbers: ");
 for(i=0;i<10;i++)
 {
  scanf("%d",p);
  p++;
 }
 p=s;
 for(i=0;i<10;i++)
 {
  p=s;
  for(j=0;j<10;j++)
  {
   if(*p<*(p+1))
   {
    *t=*p;
    *p=*(p+1);
    *(p+1)=*t;
    p++;
   }
   else
   p++;
  }
 }
 printf("\nNumbers in descending order: ");
 p=s;
 for(i=0;i<10;i++)
 {
  printf("%d ",*p);
  p++;
 }
 getch();
}