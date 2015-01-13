#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[50],b[20];
int i,j=0,k,l=0,m=0;
clrscr();
printf("Please enter the string: ");
gets(a);
printf("\nEnter the word you want to search: ");
gets(b);
l=strlen(a);
m=strlen(b);
printf("\nLength of the string: %d",l);
printf("\nLength of the word: %d",m);

for(i=0;a[i]<=l;i++)
{
  if(a[i]==b[j])
  j++;


}
getch();

}