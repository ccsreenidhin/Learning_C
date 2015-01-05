#include<stdio.h>
void main()
{
 int a[10][10],i,j,p=0;
 clrscr();
 printf("Enter the elements:\n");
 for(i=0;i<4;i++)
 {
  for(j=0;j<4;j++)
  scanf("%d",&a[i][j]);
 }
 printf("\nYou've entered this:\n");
 for(i=0;i<4;i++)
 {
  for(j=0;j<4;j++)
  {
   printf("%d ",a[i][j]);
  }
  printf("\n");
 }
 for(i=0;i<4;i++)
 {
  for(j=3;j>i;j--)
  {
    if(a[i][j]!=0)
     {
      p=1;
      break;
     }
     else
     {
      p=0;
      break;
     }
   }
   if(p==1)
   break;
  }
 if(p==1)
 printf("\nIt's not an upper triangle");
 if(p==0)
 printf("\nIt's an upper triangle");
 getch();
 }
