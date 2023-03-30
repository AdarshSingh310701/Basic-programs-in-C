/*Name-Adarsh Singh
Roll no.-17
Date-29-04-2021
*/
#include <stdio.h>
int main()
{
char str[100],c;
char *p;
int i,count=0;
printf("Enter the full name: ");
fgets(str, 100, stdin);

printf("Enter character to be searched: ");
c=getchar();
for(i=0;str[i];i++)
{
if(str[i]==c)
{
count++;
}
}
printf("character '%c' occurs %d times \n ",c,count);
p=str;
printf("The full name is: ");

while(*p!='\0')
printf("%c",*p++);
return 0;
}

