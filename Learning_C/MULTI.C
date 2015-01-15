#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],i,j,k,m,n,p,q;
char x;
clrscr();
do
{
printf("\nEnter the order of first matrix: ");
scanf("%d%d",&m,&n);
printf("\nEnter the order of the second matrix: ");
scanf("%d%d",&p,&q);
if(n==p)
{
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
  for(j=0;j<q;j++)
  {
   c[i][j]=0;
   for(k=0;k<n;k++)
   c[i][j]=(c[i][j]+a[i][k]*b[k][j]);
   }
  }
printf("\nMultiplied matrix:\n");
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<m;j++)
printf("%d ",c[i][j]);
}
}
else
printf("\nFirst column must be equal to second row\n");
printf("\n\nIf you want to continue,press y: ");
fflush(stdin);
scanf("%c",&x);
}while(x=='y');
getch();
}