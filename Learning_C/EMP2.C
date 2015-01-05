#include<stdio.h>
struct emp
{
 char name[20];
 int sal;
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
printf("enter the name n salary of employees");
for(i=0;i<n;i++)
scanf("%s%d",&e[i].name,&e[i].sal);
for(i=0;i<n;i++)
 {
 e[i].hra=(float)(e[i].sal/10);
 e[i].da=(float)(e[i].sal/20);
 e[i].ta=(float)((e[i].sal/25)*2);
 e[i].total=e[i].sal+e[i].hra+e[i].da+e[i].ta;
 }
printf("the employee details according to salary are");
for(i=0;i<n;i++)
{
  for(j=0;j<n-i-1;j++)
  {
   if((e[j].total)>(e[j+1].total))
    {
      t=e[j];
      e[j]=e[j+1];
      e[j+1]=t;
    }
  }
}
for(i=0;i<n;i++)
printf("\n%d %f %f %f %f",e[i].sal,e[i].hra,e[i].da,e[i].ta,e[i].total);
getch();
}