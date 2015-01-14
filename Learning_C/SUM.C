#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,s=0;
clrscr();
printf("Please enter the limit: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
s=s+i;
printf("The result is: %d",s);
getch();
}


