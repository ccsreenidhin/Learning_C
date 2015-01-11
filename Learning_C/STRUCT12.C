#include<stdio.h>
struct address
{
 char hn[10];
 char city[10];
 long int pin;
};
struct student
{
 char name [10];
 int age;
 struct address ad;
}s1[5];
void main()
{
 int i;
 clrscr();
 printf("\tStudent details\n");
 for(i=0;i<3;i++)
 {
  printf("\nStudent %d details\n",i+1);
  printf("Enter name: ");
  fflush(stdin);
  gets(s1[i].name);
  printf("Enter age: ");
  fflush(stdin);
  scanf("%d",&s1[i].age);
  //printf("\nEnter address: ");
  printf("Enter house name: ");
  fflush(stdin);
  gets(s1[i].ad.hn);
  printf("Enter city: ");
  fflush(stdin);
  gets(s1[i].ad.city);
  printf("Enter pin code: ");
  fflush(stdin);
  scanf("%ld",&s1[i].ad.pin);
}
printf("\nDetails: \n");
 for(i=0;i<3;i++)
 {
  printf("\n\nStudent %d details\n",i+1);
  printf("\nName: ");
  puts(s1[i].name);
  printf("Age: ");
  printf("%d",s1[i].age);
  printf("\nAddress: ");
  printf("\nHouse name: ");
  puts(s1[i].ad.hn);
  printf("City: ");
  puts(s1[i].ad.city);
  printf("Pin code: ");
  printf("%ld",s1[i].ad.pin);
}
getch();
}