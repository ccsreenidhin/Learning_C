#include<stdio.h>
void display();
void main()
{
int a[10],i;
clrscr();
printf("Enter 5 numbers: ");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
display(a);
getch();
}
void display(int *p)
{
 printf("\nYou've entered:\n");
 for(i=0;i<5;i++)
 {
 printf("%d",*p);
 p++;
 }
}