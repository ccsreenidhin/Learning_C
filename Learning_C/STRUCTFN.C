#include<stdio.h>

struct stud
{
char name[10];
char sub[10];
int mark;
}s[10];
//void display(struct stud *p);
void topper(struct stud *p);
void main()
{
 int i;
 clrscr();
 for(i=0;i<3;i++)
 {
  printf("\nStudent %d details:\n",i+1);
  printf("\nPlease enter name: ");
  fflush(stdin);
  gets(s[i].name);
  printf("Enter the subject: ");
  fflush(stdin);
  gets(s[i].sub);
  printf("Enter mark: ");
  fflush(stdin);
  scanf("%d",&s[i].mark);
 }
 //display(s);
 topper(s);
 getch();
 }
void topper(struct stud *s)
{
 int i=0,t=0;
 //struct stud *b;
 //b=s;
 //char temp[10],temp2[10];
 printf("\nTopper:\n");
 while(i<3)
 {
  if(t<(s+i)->mark)
    {
     t=(s+i)->mark;
    }
    i++;
  }
//s=b;
for(i=0;i<3;i++,s++)
{
 if(s->mark==t)
 {
   printf("\nName: %s",s->name);
   printf("\nSub: %s",s->sub);
   printf("\nMark: %d",s->mark);
   break;
 }
}
}

/*void display(struct stud *p)
{
 int i;
 printf("\nDetails:\n");
 for(i=0;i<5;i++)
 {
  printf("\n\nStudent %d details:",i+1);
  printf("\nName: %s",(p+i)->name);
  printf("\nSub: %s",(p+i)->sub);
  printf("\nMark: %d",(p+i)->mark);
 }
}*/