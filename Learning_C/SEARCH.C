#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[50],b[20];
int i=0,j=0,k=0,l=0,p=0;
clrscr();
printf("Please enter the string: ");
gets(a);
printf("\nEnter the word you want to search: ");
gets(b);
k=strlen(a);
l=strlen(b);
printf("\nLength of the string: %d",k);
printf("\nLength of the word: %d",l);
for(i=0;i<=(k-l);i++)
 {
   for(j=i;j<i+l;j++)
     {
     p=0;
      if(a[j]!=b[j-i])
      {
      p=1;
      break;
      }
     }
     if(p==0)
     break;
 }
 if(p==0)
 printf("\nThe word is present");
 if(p==1)
 printf("\nThe word is not  present");
 getch();
}