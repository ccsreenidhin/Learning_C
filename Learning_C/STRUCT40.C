#include<stdio.h>
struct student
{
 char name[10];
 int m1,m2;
 int total;
}std[10];
void main()
{
 int i;
 clrscr();
 for(i=0;i<5;i++)
 {
  printf("\nStudent %d details",i+1);
  printf("\nEnter name: ");
  fflush(stdin);
  gets(std[i].name);
  printf("\nEnter m1,m2: ");
  fflush(stdin);
  scanf("%d%d",&std[i].m1,&std[i].m2);
  printf("\n");
  std[i].total=(std[i].m1+std[i].m2);
 }
 printf("\nYou have entered:\n");
 for(i=0;i<5;i++)
 {
  printf("\nStudent %d details: %d",i+1);
  printf("\nName: %s",std[i].name);
  printf("\nTotal mark: %d",std[i].total);
 }
 getch();
}