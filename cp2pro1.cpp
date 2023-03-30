#include<stdio.h>
main()
{ int n,i,j=1;
printf("Pls enter any number of your choice");
scanf("%d",&n);
i=n;
do
{printf("%d!",i);
i--;
}while(i>=1);
printf("0");
do
{printf("%d!",j);
j++;
}while(j<=n);
printf("%d!",n+1);
}

