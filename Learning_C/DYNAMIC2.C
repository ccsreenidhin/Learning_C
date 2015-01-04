#include<stdio.h>
#include<alloc.h>
void main()
{
 int *p,*s,i;
 clrscr();
 p=malloc(10*sizeof(int));
 printf("Enter 10 numbers: ");
 for(i=0;i<10;i++)
 {
  scanf("%d",p+i);
 }
 printf("\nYou have entered: ");
 //p=s;
 //p--;
 for(i=0;i<10;i++)
 {
  printf("%d ",*(p+i));
 }
 p=realloc(p,5);
 printf("\n\nEnter additional 5 numbers: ");
 for(i=10;i<15;i++)
 {
  scanf("%d",p+i);
 }
 printf("\nTotal numbers: ");
 for(i=0;i<15;i++)
 {
  printf("%d ",*(p+i));
 }
 free(p);
 p=calloc(10,sizeof(int));
 printf("\nFinal numbers: ");
 for(i=0;i<10;i++)
 {
  printf("%d ",*(p+i));
 }
 printf("\nyahoo numbers: ");
 for(i=10;i<25;i++)
 {
  printf("%d ",*(p+i));
  }
 getch();
}
