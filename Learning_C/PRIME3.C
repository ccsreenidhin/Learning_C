#include<stdio.h>
void prime(int n);
void main()
{
int n;
clrscr();
printf("Enter the number: ");
scanf("%d",&n);
prime(n);
getch();
}
void prime(int n)
{
 int i,p=0;
 for(i=2;i<=n/2;i++)
 {
  if(n%i==0)
   {
    p=1;
    break;
   }
 }
if(p==1)
printf("\nIt is not prime");
else
printf("\nIt is prime");
}