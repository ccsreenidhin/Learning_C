#include<stdio.h>
#include<conio.h>
#define floatconvert

struct emp
{
char name[20];
int sal;
float hra,da,ta,total;
}e[10],tp[10];
void main()
{
int i,n,j;
clrscr();
printf("Enter the number of emp\n");
scanf("%d",&n);
printf("Enter details\nName\tSalary\n");
for(i=0;i<n;i++)
{
scanf("%s%d",&e[i].name,&e[i].sal);
}
for(i=0;i<n;i++)
{
e[i].hra=(float)e[i].sal*.1;
e[i].da=(float)e[i].sal*.05;
e[i].ta=(float)e[i].sal*.08;
e[i].total=(float)e[i].sal+e[i].hra+e[i].da+e[i].ta;
}
for(i=0;i<n-1;i++)
{
 for(j=0;j<n-i-1;j++)
 {
  if(e[j].total>e[j+1].total)
   {
   tp[j]=e[j];
   e[j]=e[j+1];
   e[j+1]=tp[j];
   }
 }
}

printf("The details\nName\tSalary\tHra\tDa\tTa\tTotal\n");
for(i=0;i<n;i++)
{
printf("%s\t%d\t%f\t%f\t%f\t%f",e[i].name,e[i].sal,e[i].hra,e[i].da,e[i].ta,e[i].total);
printf("\n");
}
getch();
}