#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,s=1;
clrscr();
printf("Please enter the number: ");
scanf("%d",&a);
for(i=1;i<=a;i++)
s=s*i;
printf("Factorial: %d",s);
getch();
}