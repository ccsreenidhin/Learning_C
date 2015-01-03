 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 void main()
 {
  char a;
  FILE *fp;

  fp=fopen("sam1.txt","w+");
  if(fp==NULL)
  {
   printf("file cannot be open");
   exit(0);
  }
  while(1)
  {
   a=getche();
   if(a==13)
   break;
   fputc(a,fp);
  }

  while(1)
  {
   a=fgetc(fp);
   if(a==EOF)
   break;
   putch(a);
  }
   fseek(fp,0,SEEK_END);
  fclose(fp);
  getch();
 }