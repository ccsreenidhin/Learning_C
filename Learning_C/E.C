#include<stdio.h>

struct emp
{
char name[20]
int emp no,salary;
}e[20];
int n,i;
void display(struct emp[]);
void main()
{
printf("no of employe");
scanf("%d",&n);
display(e);
getch();
}
