#include<stdio.h>
#include<conio.h>
void main()
{
intn,r,p=0,s=1,v=1,w=0;
clrscr();
printf("Please enter n: ");
scanf("%d",&n);
printf("Please enter r: ");
scanf("%d",&r);
p=n-r;
for(i=1;i<=n;i++)
s=s*i;
for(i=1;i<=p;i++)
v=v*i;
w=s/v;
printf("\nnpr= %d",w);
getch();
}