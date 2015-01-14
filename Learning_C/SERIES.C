#include<stdio.h>
float fact(int i);
void main()
{
int l;
float i,s=0;
clrscr();
printf("\nEnter the limit: ");
scanf("%d",&l);
for(i=1;i<=l;i++)
{
s=s+(i)/(fact(i));
}
printf("\nFact sum: %f",s);
getch();
}
float fact(int i)
{
int p=1;
if(i==1)
return 1;
else
p=i*fact(i-1);
return p;
}