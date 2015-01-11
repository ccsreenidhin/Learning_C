#include<stdio.h>
void main()
{
char a[10],b[10],c[30];
int i,j=0;
clrscr();
printf("\tJoin two strings\n\n");
printf("Please enter the first string: ");
scanf("%s",a);
printf("Please enter the second string: ");
scanf("%s",b);
for(i=0;a[i]!='\0';i++)
 {
   c[j]=a[i];
   j++;
   }
for(i=0;b[i]!='\0';i++)
 {
   c[j]=b[i];
   j++;
   }
c[j]='\0';
printf("\nJoined string: ");
printf("%s",c);
getch();
}
