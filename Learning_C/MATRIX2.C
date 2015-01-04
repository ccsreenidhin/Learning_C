#include<stdio.h>
#include<conio.h>
void main()
{
int a[20][20],b[20][20],c[20][20],i,j,m,n,p,q,x=0;
char s;
clrscr();
do
{
printf("\nEnter the order of the first  matrix: \n");
scanf("%d%d",&m,&n);
printf("\nEnter the order of the second matrix:\n");
scanf("%d%d",&p,&q);
if(m==p&&n==q)
{
  x=1;
printf("\nEnter the first matrix elements:\n");
for(i=0;i<m;i++)
{
   for(j=0;j<n;j++)
   scanf("%d",&a[i][j]);
   }

printf("\nEnter the second matrix elements:\n");
for(i=0;i<p;i++)
{
  for(j=0;j<q;j++)
  scanf("%d",&b[i][j]);
  }
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 c[i][j]=(a[i][j]+b[i][j]);
 }
printf("\nThe result is:\n");
for(i=0;i<m;i++)
{
  for(j=0;j<n;j++)
  printf("%d ",c[i][j]);
  printf("\n");
  }
  }
  else
  fflush(stdin);
  if(x==0)
  printf("\nBoth rows and columns must be equal");
 printf("\n\nIf you want to continue press y");
 fflush(stdin);
 scanf("%c",&s);
 }while(s=='y');
getch();
}