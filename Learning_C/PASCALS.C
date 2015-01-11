#include<stdio.h>
void main()
{
int i,j,k,l;
clrscr();
printf("Please enter the length: ");
scanf("%d",&l);
for(i=1;i<=l;i++)
 {
   for(j=i;j<=l-1;j++)
   printf("  ");
   for(k=1;k<i;k++)
   printf("%d ",k);
   for(k=i;k>=1;k--)
   printf("%d ",k);
   printf("\n");
 }
 getch();
}
