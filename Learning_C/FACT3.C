#include<stdio.h>
int fact(int n);
void main()
{
int n,f;
clrscr();
printf("Enter the number: ");
scanf("%d",&n);
f=fact(n);
printf("\nFactorial of %d: %d",n,f);
getch();
}
int fact(int n)
{
 int f=1;
 if(n==1)
 return 1;
 else

 // printf("%d \n",n);
   f=n*fact(n-1);

  return f;
}