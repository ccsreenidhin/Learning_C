#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c=0,n,i;
clrscr();
printf("Please enter the limit: ");
scanf("%d",&n);
printf("\nFibonacci series upto %d:");
printf("%d  %d",a,b);
for(i=0;i<n;i++)
{
c=a+b;
printf("  %d",c);
a=b;
b=c;
}
getch();
}
