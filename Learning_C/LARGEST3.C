#include<stdio.h>
void main()
{
int a[10],i,t;
clrscr();
printf("Enter 5 numbers: ");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0;i<5;i++)
{
 if(a[i]>a[i+1])
  {
   t=a[i];
   a[i+1]=t;
   }
 }
 printf("\nLargest: %d",a[i]);
 getch();

}