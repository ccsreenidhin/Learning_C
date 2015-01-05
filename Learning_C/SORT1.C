#include<stdio.h>
#include<conio.h>

void main()
{
 int a[10],i,j,t;
 clrscr();
 printf("Enter 10 numbers: ");
 for(i=0;i<10;i++)
 scanf("%d",&a[i]);
 for(i=0;i<10;i++)
 {
  for(j=0;j<10;j++)
  {
   if(a[j]>a[j+1])
   {
    t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
    }
   }
  }
  printf("\nSorted numbers: ");
  for(i=0;i<10;i++)
  printf(" %d",a[i]);
 getch();
}
