 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 void main()
 {
  char a;
  FILE *fp;
  clrscr();
  fp=fopen("sam1.txt","r+");
  if(fp==NULL)
  {
   printf("file cannot be open");
   exit(0);
  }
   fseek(fp,0,SEEK_SET);
  while(1)
  {
   a=fgetc(fp);
   if(a==EOF)
   break;
   putch(a);
  }
  fclose(fp);
  getch();
 }