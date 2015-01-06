#include<stdio.h>
void main()
{
int i,j,n;
clrscr();
printf("Please enter the limit: ");
scanf("%d",&n);
 for(j=1;j<=n;j++)
  {
   for(i=n-j;i>0;i--)
   printf(" ");
   for(i=0;i<j;i++)
   printf("*");
   printf("\n");
   }


getch();
}

