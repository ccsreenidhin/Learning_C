#include<stdio.h>
void addition(int (*p)[3],int (*q)[3]);
void main()
{
 int a[3][3],b[3][3],i,j;
 clrscr();
 printf("Enter mat1 elements:\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("\nEnter mat2 elements:\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }
 addition(a,b);
 getch();
}
void addition(int (*p)[3],int (*q)[3])
{
 int i,j,*s,*v,c[3][3];
 for(i=0;i<3;i++)
 {
  s=*p;
  v=*q;
  for(j=0;j<3;j++,s++,v++)
  {
    c[i][j]=(*s+*v);
  }
  p++;
  q++;
 }
 printf("\nAdded matrix:\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("%d ",c[i][j]);
  }
  printf("\n");
 }
}