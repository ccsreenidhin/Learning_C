#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[10],b[10],c;
int i=0,j=0;
clrscr();
do
{
printf("Please choose any of the given option: \n");

printf("\nPress 1 for string length\n");
printf("\nPress 2 for string compare\n");
printf("\nPress 3 for string copy\n");
printf("\nPress 4 for string concatenation\n");
printf("\npress 5 to exit\n");

printf("\nEnter your option: ");
scanf("%d",&i);
switch(i)
{
case 1:
fflush(stdin);
printf("\nYou have selected option %d\n",i);
printf("\nPlease enter the string: ");

gets(a);
j=strlen(a);
printf("\nLength: %d",j);

break;
case 2:
fflush(stdin);
printf("\nYou have selected option %d\n",i);
printf("\nPlease enter the first string: ");
gets(a);
printf("\nEnter the second string: ");
gets(b);
j=strcmp(a,b);
if(j==0)
printf("\nThe strings are equal");
if(j==1)
printf("\nThe strings are not equal");
break;
case 3:
fflush(stdin);
printf("\nYou have selected option %d\n",i);
printf("Please enter the first string: ");
gets(a);
printf("Please enter the second string: ");
gets(b);
strcpy(a,b);
printf("\nCopied string:");
puts(a);

break;
case 4:
fflush(stdin);
printf("\nYou have selected option %d\n",i);
printf("\nPlease enter the first string: ");
gets(a);
printf("\nPlease enter the second string: ");
gets(b);
strcat(a,b);
printf("\nJoined string: ");
puts(a);

break;
case 5:
fflush(stdin);
printf("\nYou have opted to exit");
break;
default:
printf("\nPlease enter a valid option");
break;
}

printf("\nDo you want to continue?");
printf("\nPress Y");

}while(c=='Y');
getch();

}