#include<stdio.h>
//#include<file.h>
FILE *fp;
void main()
{
 int i,a;
 clrscr();
 fp=fopen("trial.txt","w");
 printf("Please enter 5 numbers: ");
 for(i=0;i<5;i++)
 {
  scanf("%d,",&a);
  fprintf(fp,"%d,",a);
 }
 fclose(fp);
 fp=fopen("trial.txt","r");
 for(i=0;i<5;i++)
 {
  fscanf(fp,"%d,",&a);
  printf("%d,",a);
 }
 getch();
}