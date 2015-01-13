#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,s=1;
clrscr();
printf("Please enter the number: ");
scanf("%d",&n);
printf("Factorial: ");
for(i=1;i<=n;i++0
{
s=s*i;
printf("%d",s);
}
getch();
}
