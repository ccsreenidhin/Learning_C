#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],i,j,r,c,s=0,p=1;
clrscr();
printf("Please enter the order of the matrix: ");
scanf("%d%d",&r,&c);
printf("\nEnter the elements:\n");
for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  scanf("%d",&a[i][j]);
 }
 j=0;
 for(i=r;i>0;i--)
  {
   s++;
   for(j=s;j<r;j++)
    {
     if(a[i][j]!=0)
      {
       p=0;
       break;
      }
     }
    if(p==0)
    break;
   }
   if(p==0)
   printf("\nIt is not a lower triangle\n");
   if(p==1)
   printf("\nIt is a lower triangle");
   getch();
   }