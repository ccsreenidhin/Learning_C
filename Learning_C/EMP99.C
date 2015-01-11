#include<stdio.h>
#include<alloc.h>

struct address
{
 char hn[10];
 long int pin;
};
struct employee
{
 char name[10];
 int age;
 long int phone;
 struct address ad;
}*e;
void display(struct employee *e,int n);
void
void main()
{

 int n,i,z;
 char x;
//do
//{
 struct employee *g;
 e=(struct employee*)malloc(n*sizeof(struct employee));
 g=e;
 clrscr();
 printf("Enter number of employees: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\nEmployee %d details",i+1);
  printf("\nEnter employee name: ");
  fflush(stdin);
  gets(e->name);
  printf("Enter age: ");
  fflush(stdin);
  scanf("%d",&e->age);
  printf("Enter phone number: ");
  fflush(stdin);
  scanf("%ld",&e->phone);
  printf("\nEnter address...");
  printf("\nEnter house name: ");
  fflush(stdin);
  gets(e->ad.hn);
  printf("Enter pin: ");
  fflush(stdin);
  scanf("%ld",&e->ad.pin);
  e++;
 }
 e=g;
 display(e,n);
 printf("\nIf you want to add a new employee,press y: ");
 fflush(stdin);
 scanf("%c",&x);
 if(x=='y')
 {
  printf("\nEnter the number of new employees: ");
  scanf("%d",&z);
  e=realloc(e,z);

 //}while(x=='y');
 getch();
}
void display (struct employee *p,int q)
{
 int i;
 long int a;
 printf("\nPlease enter the phone number you want to search: ");
 scanf("%ld",&a);
 printf("\n\tEmployee details\t\n");
 for(i=0;i<q;i++)
 {
  if(p->phone==a)
  {
   printf("\nEmployee name\tAge\tPhone\tPin");
   printf("\n\t%s\t%d\t%ld",p->name,p->age,p->phone,p->ad.hn);
   printf("\t%ld",p->ad.pin);
   break;
  }
  else
  p++;
 }
}