#include<stdio.h>
void main()
{
int i,j,n,a=1;
clrscr();
printf("Enter the limit: ");
scanf("%d",&n);
for(j=1;j<=n;j++)
{
for(i=n-j;i>0;i--)
printf(" ");

for(i=1;i<=(j+1)/2;i++)
printf("%d ",i);

//printf("%d ",a++);

printf("\n");
}

getch();
}