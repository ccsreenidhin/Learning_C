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
  int i,j;
  char a[10];
  struct stud s[20],t;
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
  printf("students list after sorting\n");
  for(j=0;j<5;j++)
  {
   for(i=0;i<4;i++)
   {
    if(s[i].mks>s[i+1].mks)
    {
     t=s[i];
     s[i]=s[i+1];
     s[i+1]=t;
    }
   }
   }
  for(i=0;i<5;i++)
  {
   printf("\n%s",s[i].nm);
   printf("\t%d",s[i].mks);
  }
  fclose(fp);
  getch();
 }