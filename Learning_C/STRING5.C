#include<stdio.h>
void search(char *f,char n);
void main()
{
char n,a[20],i=0,x;
clrscr();
do
{
printf("\nPlease enter the string: ");
fflush(stdin);
gets(a);
printf("\nPlease enter the letter you want to search: ");
scanf("%c",&n);
search(a,n);
printf("\n\nIf you want to continue,press y:  ");
fflush(stdin);
scanf("%c",&x);

}while(x=='y');
getch();
}
void search(char *f,char n)
{
 int p=0,j;
for(j=0;*f!='\0';j++)
 {
  if(*f!=n)
  f++;
  else
  {
   p=1;
   break;
  }
 }
 if(p==1)
 printf("\nThe letter is present");
 if(p==0)
 printf("\nThe letter is not present");
}