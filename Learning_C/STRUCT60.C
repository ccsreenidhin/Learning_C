#include<stdio.h>
struct student
{
 char name[10];
 int m1,m2;
 int total;
}*s,*k;
void display(struct student *m);
void main()
{
 int i;
 s=(struct student*)malloc(5*sizeof(struct student));
 k=s;
 clrscr();
 for(i=0;i<3;i++)
 {
  printf("Student %d details",i+1);
  printf("\nEnter name : ");
  fflush(stdin);
  gets(s->name);
  printf("Enter m1,m2: ");
  fflush(stdin);
  scanf("%d%d",&s->m1,&s->m2);
  printf("\n");
  s->total=(s->m1+s->m2);
  s++;
 }
 s=k;
 display(s);
 getch();
}
void display (struct student *g)
{
 int i;
 printf("\nYou have entered:\n\n");
 for(i=0;i<3;i++)
 {
  printf("Student %d details\n",i+1);
  printf("Name: %s",g->name);
  printf("\nTotal mark: %d",g->total);
  printf("\n\n");
  g++;
 }
}