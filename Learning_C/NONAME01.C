#include<stdio.h>
#include<conio.h>
void main()
{
char a;
FILE *fp;
fp=fopen("hashir.txt","w");
if(fp==NULL)
printf("cannot open the file");
else
{
while(1)
{
a=getche();
fputc(a,fp);
if(a==13)
break;
}
}
getch();
}