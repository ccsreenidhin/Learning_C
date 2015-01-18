#include<stdio.h>
void main()
{
char str[30],rep[30],word[30],temp[30],final[30]="";
int i=0,k=0;
clrscr();
printf("enter the string");
gets(str);
printf("enter the word to be replaced");
gets(rep);
printf("enter the word to replace with");
gets(word);
for(k=0;str[k]!='\0';k++)
{
i=0;
while(str[k]!=' '&&str[k]!='\0')
{
 temp[i]=str[k];
 k++;
 i++;
}
temp[i]='\0';
if(strcmp(temp,rep)==0)
strcat(final,word);
else
strcat(final,temp);
strcat(final," ");
if(str[k]=='\0')
break;
}
puts(final);
getch();
}