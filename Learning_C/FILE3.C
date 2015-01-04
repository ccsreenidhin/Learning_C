#include<stdio.h>
FILE *fp,*fs;
void main()
{
 char a[20];
 clrscr();
 printf("Enter details into the first file: ");
 fp=fopen("abc.txt","w");
 gets(a);
 fprintf(fp,"%s",a);
 fclose(fp);
 printf("\nReading from the first file..");
 fp=fopen("sdf.txt","r");
 fscanf(fp,"%s",a);
 printf("%s",a);
 fclose(fp);
 printf("\nCopying contents to second file..");
 fp=fopen("abc.txt","r");
 fscanf(fp,"%s",a);
 fs=fopen("sdf.txt","w");
 fprintf(fs,"%s",a);
 fclose(fp);
 fclose(fs);
 getch();
 }