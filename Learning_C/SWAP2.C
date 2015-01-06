#include<stdio.h>
void swap();
void main()
{
char a,b;
clrscr();
printf("Enter the numbers: ");
scanf("%c %c",&a,&b);
swap(&a,&b);
printf("\nSwapped numbers: a=%c ,b=%c",a,b);
getch();
}
void swap(char *p,char *q)
{
char c;
c=*p;
*p=*q;
*q=c;
printf("\nSwapped values: a=%c,b=%c",*p,*q);

}