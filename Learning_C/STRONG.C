#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,i,r=0,c=1,s=0;
clrscr();
printf("Please enter the number: ");
scanf("%d",&n);
a=n;
do
{
r=n%10;
for(i=1;i<=r;i++)
{
c=c*i;
}
printf("%d   ",c);
s=s+c;
n=n/10;
}while(n>0);
if(s==a)
printf("\nIt is a strong number\n");
else
printf("\nIt is not a strong number");
getch();
}


