#include<stdio.h>
#include<conio.h>
int npr(int n);
//int npr2(int q);
void main()
{
int n,r;
clrscr();
printf("Please enetr n,r: ");
scanf("%d%d",&n,&r);
//f=npr1(n);
//j=npr1(q);
//t=f/j;
printf("\nnpr= %d",npr(n)/(npr(n-r))*(npr(r)));
getch();
}
int npr(int n)
{
 int p=1;
 if(n==1)
 return 1;
 else
  {
   p=n*npr(n-1);
  }
return p;
}
