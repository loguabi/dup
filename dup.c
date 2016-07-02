#include<stdio.h>
#include<conio.h>
#include<string.h>
void dup(char s[],int b)
{
int k,l[40]={0};
clrscr();
for(k=0;k<b;k++)
l[s[k]%97]++;
for(k=0;k<b;k++)
{
if(l[s[k]%97]==1)
{
printf("%c\n",s[k]);
l[s[k]%97]=0;
}
}
}
int main()
{
char s[200];
int b;
scanf("%s",s);
b=strlen(s);
dup(s,b);
getch();
return 0;
}
