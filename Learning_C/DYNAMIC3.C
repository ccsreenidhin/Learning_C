#include<stdio.h>
#include<alloc.h>
void main()
{
 int *p,*s,i,t=0;
 clrscr();
 p=malloc(10*sizeof(int));
 s=p;
 printf("Enter 10 numbers: ");
 for(i=0;i<10;i++)
 {
  scanf("%d",p);
  p++;
 }
 //p--;
 p=s;
 for(i=0;i<10;i++)
 {
  if(*p>t)
   {
    t=*p;
    p++;
   }
  else
  p++;
 }
 printf("\nLargest of the array: %d",t);
 getch();
}