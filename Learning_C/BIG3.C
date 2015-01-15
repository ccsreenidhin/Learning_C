#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Please enter the numbers: ");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("%d is greater",a);
if(b>a&&b>c)
printf("%d is greater",b);
else
printf("%d is greater",c);
getch();
}
