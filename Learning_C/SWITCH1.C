#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,i;
char s;
clrscr();
printf("Please enter the numbers: \n");
scanf("%d%d",&a,&b);
fflush(stdin);
i=0;
do
{
printf("\nPlease enter the operator: \n");
fflush(stdin);
scanf("%c",&s);

switch(s)
{
case '+':
	 i++;
	 c=a+b;
	 break;
case '-':
	 i++;
	 c=a-b;
	 break;
case '*':
	 i++;
	 c=a*b;
	 break;
case '/':
	 i++;
	 c=a/b;
	 break;
default:
	 printf("\nPlease enter a valid operator");
}
}while(i==0);
printf("\nResult: %d",c);
getch();
}