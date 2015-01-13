#include<stdio.h>
struct student
{
 char name[10];
 int m1,m2;
 int total;
};
void main()
{
 int i;
 struct student *s;
 s=(struct student*)malloc(23*sizeof(struct student));
 clrscr();
  //printf("\nStudent %d details",i+1);
  printf("\nEnter name: ");
  fflush(stdin);
  gets(s->name);
  printf("Enter m1,m2: ");
  fflush(stdin);
  scanf("%d%d",&s->m1,&s->m2);
  printf("\n");
  s->total=(s->m1+s->m2);

 printf("\nYou have entered:\n");
  //printf("Student %d details\n",i+1);
  printf("\nName: %s",s->name);
  printf("\nTotal mark: %d",s->total);
  printf("\n");

 getch();
}