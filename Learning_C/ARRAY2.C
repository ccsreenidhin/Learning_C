#include<stdio.h>
void main()
{
int i,a[5],t;
clrscr();
printf("Enter 5 numbers: ");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0;i<5;i++)
{
  if(a[i]>a[i+1])
  t=a[i];
  a[i]=a[i+1];
  }
printf("Largest: %d",t);
getch();
}
