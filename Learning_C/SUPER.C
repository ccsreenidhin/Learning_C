#include<stdio.h>
#include<stdlib.h>
void odd(int z);
void prime(int z);
void armstrong(int z);
void main()
{
int i,z;
char x;
clrscr();
do
{

printf("\nPlease enter the number: ");
scanf("%d",&z);
printf("\nPlease choose any of the given options:\n");
printf("\nPress 1 for odd or even\n");
printf("\nPress 2 for prime or not\n");
printf("\nPress 3 for armstrong\n");
printf("\nPress 4 to exit\n");
printf("\nEnter your option:  ");
scanf("%d",&i);

switch(i)
{
case 1:odd(z);
       break;

case 2:prime(z);
       break;
case 3:armstrong(z);
       break;
case 4:printf("\nYou have opted to exit\n");
       break;
       //exit(0);
default:
       printf("\nPlease enter a valid option\n");
       break;
}
printf("\n\nIf you want to continue,press y:  ");
fflush(stdin);
scanf("%c",&x);

}while(x=='y');

getch();
}

void odd(int a)
{
if(a%2==0)
printf("\nIt is an even number");
else printf("\nIt is an odd number");
}
void prime(int a)
{
int i,p=1;
for(i=2;i<=a/2;i++)
 {
  if(a%i==0)
   {
    p=0;
    break;
    }
  }

  if(p==1)
  printf("\nIt is a prime number");
  if(p==0)
  printf("\nIt is not a prime number");
  }

void armstrong(int b)
{
 int p,c,s,d=0;
 p=b;
 while(b>0)
 {
  c=b%10;
  s=c*c*c;
  d=d+s;
  b=b/10;
  }
  if(p==d)
  printf("\nIt ia an armstrong number");
  else
  printf("\nIt is not an armstrong number");
  }