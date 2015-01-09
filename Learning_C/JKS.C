#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[20],b[20],c[20],d[20],e[20]="";
 int i=0,k=0,n=0;
 clrscr();
 printf("enter the string \n");
 gets(a);
 printf("enter the word to replace : \n");
 gets(b);
 printf("enter the new word : ");
 gets(c);
 for(n=0;a[n]!='\0';n++)
 {
  i=0;
  while((a[n]!=' '&&a[n]!='\0'))
  {
  d[i]=a[n];
  n++;
  i++;
  }
  d[i]='\0';
  k=strcmp(d,b);
  if(k==0)
  strcat(e,c);
  else
  strcat(e,d);
  strcat(e,"");
  if(a[n]=='\0')
  break;
  }
  puts(e);
  getch();
  }