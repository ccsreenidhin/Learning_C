#include<stdio.h>
void pallindrome();
void main()
{
char a[20];
//int i,j=0,k=0;
clrscr();
printf("Enter the string: ");
gets(a);
/*k=strlen(a);
for(i=k-1;i>=0;i--)
{
 b[j]=a[i];
 j++;
 }
 b[j]='\0';
 printf("\n%s\n",b);*/
pallindrome(a);
getch();
}

void pallindrome(char *p)
{
int i,t=0,l=0;
char *v;
v=p;
for(i=0;*p!='\0';i++,p++,l++);
p--;
for(i=0;i<l;i++)
 {
  if(*v==*p)
  {
  v++;
  p--;
  }
//  printf("%s",p);
  else
  {
   t=1;
   break;
  }
 }
if(t==1)
printf("\nIt is not a pallindrome");
if(t==0)
printf("\nIt is a pallindrome");
}