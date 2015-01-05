#include<stdio.h>
#include<alloc.h>
void main()
{
 int *p,*s,i;
 clrscr();
 p=malloc(10);
 s=p;
 printf("Enter 10 numbers: ");
 for(i=0;i<10;i++)
 {
  *p=0;
  scanf("%d",&*p);
  p++;
 }
 printf("\nYou have entered:\n");
 p=s;
 for(i=0;i<10;i++)
 {
  printf("%d ",p);
  p++;
 }
 getch();
}
