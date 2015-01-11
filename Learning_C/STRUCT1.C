#include<stdio.h>
struct employee
{
 char name[10];
 char id[10];
 int age;
}emp;
 void main()
 {

 clrscr();
 printf("Enter the details\n\n");
 printf("Enter name: ");
 gets(emp.name);
 printf("\nEnter id: ");
 gets(emp.id);
 printf("\nEnter age: ");
 scanf("%d",&emp.age);
 printf("\nSize of structure: ");
 printf("%d",sizeof(emp));
 printf("\nDetails:\n");
 printf("name: ");
 puts(emp.name);
 puts(emp.id);
 printf("%d",emp.age);
 getch();
 }
