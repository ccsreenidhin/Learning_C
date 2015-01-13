#include<stdio.h>
void display (char (*p)[10]);
void main()
{
 int i;
 char a[5][10];
 clrscr();
 for(i=0;i<5;i++)
 {
  printf("Enter name %d:\n",i+1);
  fflush(stdin);
  gets(a[i]);
  printf("\n");
 }
 display(a);
 getch();
}
void display(char (*p)[10])
{
 int i;
 char *s;
 s=*p;
 printf("\nYou've entered:\n");
 for(i=0;i<5;i++,p++)
 {
  printf("\nName %d: ",i+1);
  printf("%s",s);
 }