#include<stdio.h>
void main()
{
int n,i,a=0;
clrscr();
printf("Please enter the number: ");
//for(i=0;i<=9;i++)
scanf("%d",&n);
for(i=2;i<n/2;i++)
  {
    if(n%i==0)
    {
     a=1;
     break;
    }
  }
  if(a==0)
  printf("The number is prime");
  else
  printf("The number is not prime");
  getch();
  }