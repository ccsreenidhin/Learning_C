#include<stdio.h>
#include<string.h>
void main()
{
char a[20],b[20],x;
int n,i=0;
clrscr();
do
{
i=0;
printf("\nPress 1 for string length");
printf("\nPress 2 for string compare");
printf("\nPress 3 for string concatenation");
printf("\nPress 4 for exit");
printf("\n\nEnter your option: ");
scanf("%d",&n);
switch(n)
{
case 1:
printf("Enter the string: ");
fflush(stdin);
scanf("%s",a);
i=strlen(a);
printf("\nLength: %d",i);
break;
case 2:
printf("\nEnter the string: ");
gets(a);
printf("\nPlease enter the second string: ");
gets(b);
i=strcmp(a,b);
if(i==0)
printf("\nThe strings are equal");
if(i!=0)
printf("\nThe strings are not equal");
break;
case 3:
printf("\nEnter the string: ");
gets(a);
printf("\nEnter the second string: ");
gets(b);
strcat(a,b);
puts("\nNew string: ",a);
break;
case 4:
printf("\nYou have opted to exit");
break;
default:
printf("\nPlease enter a valid option");
break;
}
printf("\n\nIf you want to continue,press y: ");
scanf("%c",&x);
}while(x=='y');
getch();
}
