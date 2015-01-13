#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
printf("enter the first number in a: ");
scanf("%d",&a);
printf("enter the second number in b: ");
scanf("%d",&b);
c=a;
d=b;
b=c;
a=d;
printf("now in a: %d",a);
printf("now in b: %d",b);
getch();
}
