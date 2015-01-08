#include<stdio.h>
void sort();
void main()
{
int a[10],i;
clrscr();
printf("Enter 6 numbers: ");
for(i=0;i<6;i++)
scanf("%d",&a[i]);
printf("\nSorted numbers:\n");
sort(a);
for(i=0;i<6;i++)
printf("%d ",a[i]);

getch();
}
void sort(int *p)
{
int *k;
int i,j,t=0;
k=p;
for(j=0;j<6;j++)
{
 p=k;
 for(i=0;i<5;i++)
 {
  if(*p>*(p+1))
  {
   t=*p;
   *p=*(p+1);
   *(p+1)=t;
   }
   p++;
  }
 }
 p=k;
/* for(i=0;i<6;i++)
 printf("\n\n%d ",*(p++)); */
 }