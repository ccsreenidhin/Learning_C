#include<stdio.h>
#include<conio.h>
void main()
{
int n,s=0,p,r,a;
clrscr();
printf("Please enter the number: ");
scanf("%d",&n);
p=n;
while(n>0)
{
r=n%10;
a=r*r*r;
s=s+a;
n=n/10;
}
if(p==s)
printf("It is an armstrong number");
else
printf("It is not an armstrong number");
getch();
}