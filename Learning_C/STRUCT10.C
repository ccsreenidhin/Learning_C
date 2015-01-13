#include<stdio.h>
#include<string.h>
struct details
 {
  char name[10];
  int m1,m2,m3;
  int total;
 }std[3];
void main()
{
 int i,j,t;
 char temp[10];
 clrscr();
 printf("\n\tEnter the details\n");
 for(i=0;i<3;i++)
 {
  printf("\n\nEnter std %d deatails",i+1);
  printf("\n\nEnter name: ");
  fflush(stdin);
  gets(std[i].name);
  printf("\nEnter marks: m1,m2,m3: ");
  fflush(stdin);
  scanf("%d%d%d",&std[i].m1,&std[i].m2,&std[i].m3);
  std[i].total=(std[i].m1+std[i].m2+std[i].m3);
  printf("\nTotal mark= %d",std[i].total);
 }
for(j=0;j<3;j++)
{
 for(i=0;i<2;i++)
 {
  if(std[i].total>std[i+1].total)
   {
    t=std[i].total;
    std[i].total=std[i+1].total;
    std[i+1].total=t;
    std[i+1].m1=std[i].m1;
    std[i+1].m2=std[i].m2;
    std[i+1].m3=std[i].m3;
    strcpy(temp,std[i+1].name);
    strcpy(std[i+1].name,std[i].name);
    strcpy(std[i].name,temp);
   }
 }
}
printf("\nDetails in ascending order:\n");
for(i=0;i<3;i++)
 {
  printf("\nName: ");
  puts(std[i].name);
  printf("Marks: ");
  printf("%d %d %d",std[i].m1,std[i].m2,std[i].m3);
  printf("\nTotal mark: ");
  printf("%d",std[i].total);
  printf("\n");
 }
getch();
}