#include<stdio.h>
FILE *fptr;
void main()
{
 int i,a;
 clrscr();
 fptr=fopen("student.txt","w");
 for(i=0;i<5;i++)
 {
  printf("Enter the mark of student %d: ",i+1);
  scanf("%d",&a);
  fprintf(fptr,"Student %d mark: %d",i+1,a);
  fprintf(fptr,"\n");
 }
 fclose(fptr);
 fptr=fopen("student.txt","r");
 for(i=0;i<5;i++)
 {
  fscanf(fptr,"%d",&a);
  printf("Student %d mark: %d",i+1,a);
  printf("\n");
 }
 fclose(fptr);
 getch();
}
