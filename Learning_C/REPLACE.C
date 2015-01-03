#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[50],b[20];
int i,j=0,k=0,l=0,p=0;
clrscr();
printf("Enter the string: ");
gets(a);
printf("\nEnter the word: ");
gets(b);
k=strlen(a);
l=strlen(b);
for(i=0;i<=k-l;i++)
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
{
 for(j=i;j<k;j++)
 a[j]=a[j+l+1];
 printf("New string: %s",a);
//printf("\nThe word is present");
}
if(p==1)
printf("\nThe word is not present");
getch();
}