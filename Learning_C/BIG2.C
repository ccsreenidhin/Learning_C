#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter the numbers: ");
scanf("%d%d",&a,&b);
if(a>b)
printf("%d is greater",a);
else
printf("%d is greater",b);
getch();
}