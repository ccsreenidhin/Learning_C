#include<stdio.h>
float fact(float);
float mul(float);

void main()
{
int i,n;
float s=0;
clrscr();
printf("Enter the limit: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
s=s+(mul(i)/fact(i));

}
printf("\nResult : %f ",s);
getch();
}

float mul(float a)
{
float i,f=1;
for(i=1;i<=a;i++)
f=f*a;
return f;
}

float fact(float a)
{
float i,f=1;
for(i=1;i<=a;i++)
f=f*i;
return f;
}