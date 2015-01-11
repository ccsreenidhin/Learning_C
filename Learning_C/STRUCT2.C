#include<stdio.h>
struct employee
{
 char name[10];
 char id[10];
 int age;
 int salary;
}emp[5],ep;
void main()
{
 int i;
 clrscr();

 for(i=0;i<3;i++)
 {
   printf("\nEnter the details of emp %d: ",i+1);
   printf("\n\nEnter name: ");
   fflush(stdin);
   gets(emp[i].name);
   printf("\nEnter id: ");
   fflush(stdin);
   gets(emp[i].id);
   printf("\nEnter the age: ");
   fflush(stdin);
   scanf("%d",&emp[i].age);
   printf("\nEnter salary: ");
   fflush(stdin);
   scanf("%d",&emp[i].salary);
 }
 for(i=0;i<3;i++)
   {
      if(ep.salary<emp[i].salary)
       {
	ep=emp[i];
       }

   }
  printf("\nDetails of employee having high salary:\n");
  printf("\nName: ");
  puts(ep.name);
  printf("\nId: ");
  puts(ep.id);
  printf("\nAge: ");
  printf("%d",ep.age);
  printf("\nSalary: ");
  printf("%d",ep.salary);

getch();
}