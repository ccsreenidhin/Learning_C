#include<stdio.h>
void main()
{
int a[5],b[5],i,t;
clrscr();
printf("Enter 5 numbers: ");
for(i=0;i<5;i++)
{
  scanf("%d",&a[i]);
  if(a[i]%2==0)
  b[i]=a[i];
  }
  for(i=0;i<5;i++)
  {
   printf("Even numbers: %d",b[i]);
   printf("Odd numbers: %d",a[i]);
   }
   getch();
   }