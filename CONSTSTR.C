#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
int flag=0,i;
char str[20];
clrscr();
printf("Raman Kapur\n");
prinrf("1901330100216\n")
printf("CSE - 5 C\n")
printf("Enter a String - ");
scanf("%s",str);
for(i=0;i<strlen(str);i++)
{
if(isalpha(str[i])){
flag=1;
break;
}
else
continue;
}
if(flag==1)
printf("String is not constant");
else
printf("String is constant");
getch();
}