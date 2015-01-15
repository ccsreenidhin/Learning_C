#include<stdio.h>
void main()
{
char a[10],b[10];
int i,j=0,p=0;
clrscr();
printf("\tString comparison\n\n");
printf("Please enter the first string: ");
scanf("%s",a);
printf("Please enter the second string: ");
scanf("%s",b);
for(i=0;a[i]!='\0';i++)
 {
   if(a[i]!=b[j])
    {
     p=1;
     break;
    }
   j++;
   p=0;
 }
 if(p==1)
 printf("Strings are not equa\n");
 if(p==0)
 printf("Strings are equal");
 getch();
 }
