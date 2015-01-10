#include<stdio.h>
void display(int (*p)[4]);
void main()
{
 int a[2][4],i,j;
 clrscr();
 printf("Enter the elements:\n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<4;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("\nYou've entered these: \n");
 display(a);
 getch();
}
void display(int (*p)[2])
{
 int i,j,*s;
 for(i=0;i<2;i++)
 {
  s=*p;
  for(j=0;j<4;j++)
  {
   printf("%d ",*s);
   s++;
  }
  printf("\n");
  p++;
 }
}