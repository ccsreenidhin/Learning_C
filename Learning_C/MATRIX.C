#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,m,n;
clrscr();
printf("Enter the order of the matrix: \n");
scanf("%d%d",&m,&n);
printf("\nEnter the elements: \n");
for(i=0;i<m;i++)
{
   for(j=0;j<n;j++)
   scanf("%d",&a[i][j]);
   }
printf("\nYou have entered:\n");
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
  printf("%d ",a[i][j]);
  printf("\n");
  }
getch();
}