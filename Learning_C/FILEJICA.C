 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 void main()
 {
  char a;
  FILE *fp,*fpp;
   clrscr();
  fp=fopen("sam1.txt","r");
  fpp=fopen("file2.txt","w");
  if(fp==NULL)
  {
   printf("file cannot be open");
   exit(0);
  }
  while(1)
  {
   a=fgetc(fp);
   if(a>96&&a<123)
   a=a-32;
   if(a==EOF)
   break;
   fputc(a,fpp);
  }
  fclose(fp);
  getch();
 }