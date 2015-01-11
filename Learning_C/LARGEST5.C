#include<stdio.h>
void largest();
void main()
{
int a[10],i;
clrscr();
printf("Enter 5 numbers: ");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
largest(&a);
printf("\nLargest: %d",t);
getch();
}
void largest(int *p)
{
int t=0;
for(i=0;i<5;i++)
 {
  if(*p>t)
   {
    t=*p;
    *p=*p+1;
    }
   }
 }
