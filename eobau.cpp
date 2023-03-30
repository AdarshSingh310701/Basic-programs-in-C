#include<stdio.h>
main()
{
int i,j,n=2,lines;
printf("Enter number of lines:");
scanf("%d",&lines);

for(i=0;i<lines;i++)

{

for(j=0;j<=i;j++)

{

while(!prime(n))

{

n++;

}

printf("%d\t",n++);

}

printf("\n");

}

}

int prime(int n1)

{

int i,flag;

for(i=2;i<n1:i++)

{

if(n1%i!=0)

flag=1;

else

{

flag=0;

break;

}

}

if(flag==1 || n1==2)

return 1;

else

return 0;

}
