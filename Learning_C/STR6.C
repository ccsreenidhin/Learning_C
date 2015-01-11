#include<stdio.h>
int strlen();
void strcmp();
void concat();
void main()
{
char a[20],b[20],x;
int n,i=0;
clrscr();
do
{
i=0;
printf("\nPress 1 for string length");
printf("\nPress 2 for string compare");
printf("\nPress 3 for string concatenation");
printf("\nPress 4 to exit");
printf("\n\nEnter your option: ");
scanf("%d",&n);
switch(n)
{
case 1:
printf("\nEnter the string: ");
fflush(stdin);
gets(a);
i=strlen(a);
printf("Length: %d",i);
break;
case 2:
printf("\nEnter the string: ");
fflush(stdin);
gets(a);
printf("\nPlease enter the second string: ");
fflush(stdin);
gets(b);
strcmp(a,b);
break;
case 3:
printf("\nEnter the string: ");
fflush(stdin);
gets(a);
printf("\nEnter the second string: ");
fflush(stdin);
gets(b);
printf("\nNew string: ");
concat(a,b);
break;
case 4:
printf("\nYou have opted to exit");
break;
default:
printf("\nPlease enter a valid option");
break;
}
printf("\n\nIf you want to continue,press y: ");
fflush(stdin);
scanf("%c",&x);
}while(x=='y');
getch();
}

int strlen(char *p)
{
int i,j=0;
for(i=0;*p++!='\0';i++,j++);
return j;
}

void strcmp(char *p,char *q)
{
 int x=0,i;
 for(i=0;*p!='\0'||*q!='\0';i++)
 {
  if(*p!=*q)
  {
   x=1;
   break;
  }
  p++;
  q++;
 }
  if(x==0)
  printf("\nStrings are equal");
  if(x==1)
  printf("\nStrings are not equal");
}

void concat(char *p,char *q)
{
 int i;
 char*k;
 k=p;
 for(i=0;*p!='\0';i++,p++);
// while(*p++=*q++);

 for(i=0;*q!='\0';i++)
 {
  *p=*q;
  p++;
  q++;
 }

 *p='\0';
 p=k;
 printf("%s",p);
 }