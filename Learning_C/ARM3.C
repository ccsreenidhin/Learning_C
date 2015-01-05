#include<stdio.h>
void armstrong(int n);
void main()
{
int n;
clrscr();
printf("Enter the number: ");
scanf("%d",&n);
armstrong(n);
getch();
}
void armstrong(int n)
{
 int d=0,r=0,s=0,p;
 p=n;
 while(n>0)
  {
   d=n%10;
   r=d*d*d;
   s=s+r;
   n=n/10;
  }
if(p==s)
printf("\nIt is an armstrong number");
else
printf("\nIt is not an armstrong number");
}