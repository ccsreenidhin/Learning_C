#include<stdio.h>
#include<string.h>
char* display(char (*p)[10],char *q);
void main()
{
 int i,n;
 char a[5][10],b[10],x,*g;
 clrscr();
//printf("\nNumber of names:");
//scanf("%d",&n);
do
{
 for(i=0;i<3;i++)
  {
   printf("\nEnter name %d:",i+1);
   fflush(stdin);
   gets(a[i]);
   printf("\n");
  }
 printf("\nEnter the name you want to search: ");
 fflush(stdin);
 gets(b);
 g=display(a,b);
 printf("\n%s",g);
 printf("\n\nIf you want to continue,press Y: ");
 fflush(stdin);
 scanf("%c",&x);
 }while(x=='y');
 getch();
}
char* display(char (*p)[10],char *q)
{
 int i,j,k=0;
 char *s;
 for(i=0;i<3;i++,p++)
 {
  s=*p;
  j=strcmp(s,q);
  if(j!=0)
  {
   k=1;
  }
  else
  {
   k=0;
   break;
  }
 }
  if(k==1)
  printf("\nThe string is not present");
  if(k==0)
  printf("\nThe string is present");
  return p;
}