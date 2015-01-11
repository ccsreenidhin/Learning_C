 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 void main()
 {
  int i,n,a[10],j,t;
  FILE *fp;
  clrscr();
  fp=fopen("sort.txt","a+");
  if(fp==NULL)
  {
   printf("file cannot be open");
   exit(0);
  }
  //fprintf(fp,"no f modes: ");
  fscanf(fp,"%d,",&n);

  for(i=0;i<n;i++)
  {
   fscanf(fp,"%d,",&a[i]);
  }

  for(i=0;i<n;i++)
  {
   printf("%d ",a[i]);
  }

  for(j=0;j<n;j++)
  {
   for(i=0;i<n-1;i++)
   {
    if(a[i]>a[i+1])
    {
     t=a[i];
     a[i]=a[i+1];
     a[i+1]=t;
    }
   }

  }
    fseek(fp,0,SEEK_SET);
  for(i=0;i<n;i++)
  {
   fprintf(fp,"%d,",a[i]);
  }
  fclose(fp);
  getch();
 }