#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],x=1,i,j,r,c;
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
    for(j=0;j<c-1-i;j++)
     {
      if(a[i][j]!=0)
      {
      x=0;
      break;
      }
     }
     if(x==0)
     printf("\nIt is not an upper triangle");
   }

    if(x==1)
    printf("\nIt is an upper triangle");
    getch();
    }