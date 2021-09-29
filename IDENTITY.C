#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

void main()
{
char str[10],flag;
int i;
clrscr();
printf("Enter space - ");
scanf("%c",&flag) ;
printf("Enter a String - ");
scanf("%s",str);
if(isdigit(str[0]))
printf("Not an identifier!");
for(i=0;i<strlen(str);i++)
{
if(!isdigit(str[i])&&!isalpha(str[i]))
{
	printf("Not an identifier!");
	break;
}
//flag=int(str[i]);
if(str[i]==flag)
printf("Not an identifier") ;
}
getch();
}
