#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
clrscr();
printf("Please enter the limit: ");
scanf("%d",&n);
for(j=1;j<=n;j++)
{

  for(i=0;i<j;i++)
    printf("*");
    printf("\n");
}
getch();
}