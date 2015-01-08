#include<stdio.h>
#include<conio.h>
void main()
{
double a,s;
clrscr();
printf("please enter the data type:");
scanf("%d",&a);
s=sizeof(a);
printf("The size is: %lf",s);
getch();
}