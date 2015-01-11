#include<stdio.h>
void main()
{
int i=0,a[10],j;
clrscr();
printf("Enter 6 numbers: ");
for(i=0;i<=5;i++)
scanf("%d",&a[i]);
printf("Even numbers are: \n");
for(i=0;i<=5;i++)
  {
    if(a[i]%2==0)
    printf("%d ",a[i]);
  }
  printf("\nOdd numbers are: \n");
  for(i=0;i<=5;i++)
  {
    if(a[i]%2!=0)
    printf("%d ",a[i]);
  }
getch();
}