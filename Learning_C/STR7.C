#include<stdio.h>
void concat();
void main()
{
char a[10],b[10];
clrscr();
printf("\nEnter the first string: ");
gets(a);
printf("\nEnter the second string: ");
gets(b);
printf("\nNew string: ");
concat(a,b);
getch();
}
void concat(int *p,int *q)
{
 int i,*k;
 k=p;
 for(i=0;*p=='\0';i++,p++);
 for(i=0;*q=='\0';i++)
 {
  *p=*q;
  p++;
  q++;
 }
 p=k;
 printf("%s",p);
 }