 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 void main()
 {
  char a[10];
  FILE *fp;
  clrscr();
  fp=fopen("str1.txt","a+");
  if(fp==NULL)
  {
   printf("file cannot be open");
   exit(0);
  }
  gets(a);
  fputs(a,fp);
  fseek(fp,0,SEEK_SET);
  fp=fopen("str1.txt","r+");
  fgets(a,10,fp);
  puts(a);
  fclose(fp);
  getch();
 }