#include<stdio.h>
struct emp
{
 float sal;
 float hra;
 float da;
 float ta;
 float total;
};
void main()
{
int n,i,j;
struct emp e[20],t;
clrscr();
printf("enter the no of employees");
scanf("%d",&n);
printf("y shut?");
printf("enter the salary of employees");
for(i=0;i<n;i++)
scanf("%f",&e[i].sal);
printf("the employee details according to salary are");
for(i=0;i<n;i++)
{
  for(j=0;j<n-i-1;j++)
  {
   if((e[j].sal)>(e[j+1].sal))
    {
      t=e[j];
      e[j]=e[j+1];
      e[j+1]=t;
    }
  }
}
for(i=0;i<n;i++)
printf("%f\t%f\t%f\t%f",e[i].sal,e[i].hra,e[i].da,e[i].ta);
getch();
}