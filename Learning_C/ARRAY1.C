#include<stdio.h>
void main();
{
int i,a[10];
clrscr();
printf("Please eneter 5 numbers:\n");
for(i=0;i<=5;i++)
scanf("%d",&a[i]);
printf("You have entered:\n");
for(i=0;i<=5;i++)
printf("%d",a[i]);
getch();
}