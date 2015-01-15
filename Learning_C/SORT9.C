#include<stdio.h>
void main()
{
int a[20],i,t;
clrscr();
printf("Enter the numbers: ");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
for(i=0;i<10;i++)
{
 for(j=0;j<10;j++)
 {
  if(a[j]>a[j+1])
  t=a[j];
  a[j]=a[j+1];
  a[j+1]=t;
 }
}
printf("\nNumbers in ascending order: \n");
for(i=0;i<10;i++)
printf("\t%d ",a[i]);
getch();
}

