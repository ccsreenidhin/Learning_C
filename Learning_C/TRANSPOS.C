#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],i,j,r,c;
clrscr();
printf("Please enter the order of the matrix: ");
scanf("%d%d",&r,&c);
printf("\nPlease enter the elements: \n");
for(i=0;i<r;i++)
{
  for(j=0;j<c;j++)
  scanf("%d",&a[i][j]);
  }
  for(i=0;i<r-1;i++)
  {
    for(j=0;j<c-1;j++)
     {
     if(a[i][j]==0)
     x=1;
     }
    }