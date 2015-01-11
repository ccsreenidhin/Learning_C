#include<stdio.h>
#include<string.h>
struct sorting
{
 char name[10];
 int m1,m2,m3;
 int total;
}s[10];
void ascending(struct sorting *p);
void main()
{
 int i;
 clrscr();
 for(i=0;i<3;i++)
 {
  printf("\n\nStudent %d details",i+1);
  printf("\nEnter name: ");
  fflush(stdin);
  gets(s[i].name);
  printf("Enter marks m1,m2,m3: ");
  fflush(stdin);
  scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
  s[i].total=(s[i].m1+s[i].m2+s[i].m3);
  printf("Total marks: %d",s[i].total);
 }
 printf("\n\nAscending order based on total marks:");
 ascending(s);
 getch();
}
void ascending(struct sorting *s)
{
 int i,j,t;
 char temp[10],*b;
 b=s;

 for(j=0;j<3;j++)
 {
  s=b;
  for(i=0;i<2;i++,s++)
  //while(i<3)
  {
   if((s)->total>(s+1)->total)
   {
    t=(s)->total;
    (s)->total=(s+1)->total;
    (s+1)->total=t;
    strcpy(temp,s->name);
    strcpy(s->name,(s+1)->name);
    strcpy((s+1)->name,temp);
    /*s+1->m1=s->m1;
    s+1->m2=s->m2;
    s+1->m3=s->m3;*/

   }
  }
 }
 s=b;
 for(i=0;i<3;i++)
 {
  printf("\n\nName: ");
  puts(s->name);
  printf("Total mark: ");
  printf("%d",s->total);
  s++;
 }
}