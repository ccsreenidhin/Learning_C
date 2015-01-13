/*Program to sort the integers stored in a file*/
#include<stdio.h>
FILE *fp;
void main()
{
 int a[10],b[10],i,j=0,temp;
 clrscr();
 fp=fopen("sort.txt","w");
 printf("Enter 5 numbers: ");
 for(i=0;i<5;i++)
 {
  scanf("%d",&a[i]);
  fprintf(fp,"%d ",a[i]);
 }
 fclose(fp);
 fp=fopen("sort.txt","r");
 printf("\nReading from the file...");
 //for(i=0;feof(fp)==0;i++)
 for(i=0;!feof(fp);i++)
 {
  fscanf(fp,"%d ",&a[i]);
  printf("%d ",a[i]);
 }
 fclose(fp);
 fp=fopen("sort.txt","r");
 printf("\nSorting data...");
 //for(i=0;feof(fp)==0;i++)
  for(i=0;!feof(fp);i++)
  {
   fscanf(fp,"%d ",&a[i]);
   b[j]=a[i];
   j++;
  }
 printf("\nArray B: \n");
 for(i=0;i<5;i++)
 printf("%d ",b[i]);
 printf("\nArray B sorting...");
 for(i=0;i<5;i++)
 {
  for(j=0;j<4;j++)
  {
   if(b[j]>b[j+1])
   {
    temp=b[j];
    b[j]=b[j+1];
    b[j+1]=temp;
   }
  }
 }
 printf("\nArray B after sorting: \n");
 for(j=0;j<5;j++)
 printf("%d ",b[j]);
 fclose(fp);
 fp=fopen("sort.txt","a");
 fprintf(fp,"\n");
 fprintf(fp,"Sorted data: \n");
 fprintf(fp,"\n");
 for(i=0;i<5;i++)
 {
  fprintf(fp,"%d ",b[i]);
 }
 fclose(fp);
 getch();
 }