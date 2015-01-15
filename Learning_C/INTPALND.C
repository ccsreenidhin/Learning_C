/*Integer pallindrome*/
#include<stdio.h>
void main()
{
int a,b,s=0,r=0;
clrscr();
printf("Please enter the number: ");
scanf("%d",&a);
b=a;
while(a!=0)
 {
  s=a%10;
  r=r*10+s;
  a=a/10;
 }
if(b==r)
printf("\nThe number is a pallindrome");
else
printf("\nThe number is not a pallindrome");
getch();
}


