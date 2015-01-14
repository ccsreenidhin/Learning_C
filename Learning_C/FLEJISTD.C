 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 struct stud
 {
  char nm[10];
  int mks;
 };
 void main()
 {
  int i;
  struct stud s[20];
  FILE *fp;
  clrscr();
  fp=fopen("student.txt","w");
  if(fp==NULL)
  {
   printf("file cannot be open");
   exit(0);
  }
  printf("students detls: name and marks\n");
  for(i=0;i<5;i++)
  {
   scanf("%s%d",s[i].nm,&s[i].mks);
  }
  printf("students list\n");
  for(i=0;i<5;i++)
  {
   printf("%s\t%d\n",s[i].nm,s[i].mks);
  }
  for(i=0;i<5;i++)
  {
   fprintf(fp,"%s\t%d\n",s[i].nm,s[i].mks);
  }
  fclose(fp);
  getch();
 }