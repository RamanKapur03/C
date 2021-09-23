#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
int i,flag=0;
char str[20],cmp[20][20]={"break","continue","return","struct","class","void","public","private","protected","else","if","for","while","do","int","char","double","long","signed","unsigned"};
clrscr();
printf("Raman Kapur\n");
printf("1901330100216\n");
printf("CSE - 5 C");
printf("Enter a String - ");
scanf("%s",str);
for(i=0;i<10;i++)
{
if(strcmp(str,cmp[i])==0){
flag=1      ;
printf("Keyword!!");
break;
}
else
continue;
}
if(flag==0)
printf("Not a Keyword");
getch();
}
