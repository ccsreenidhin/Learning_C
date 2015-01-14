#include<stdio.h>
void main()
{
int a[10],i,b[10],j,t;
clrscr();
printf("Enter 8 numbers: ");
for(i=0;i<=7;i++)
scanf("%d",&a[i]);
for(i=0;i<=7;i++)
 {
  if(a[i]>a[i+1])
   {
     t=a[i];
     a[i]=a[i+1];
     a[i+1]=t;
   }
 }
printf("Numbers in ascending order: ");
for(i=0;i<=7;i++)
printf("%d ",a[i]);
getch();
}