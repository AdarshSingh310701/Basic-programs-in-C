#include<stdio.h>
main()
{ int n,i,j;
printf("Pls enter any number of your choice");
scanf("%d",&n);
i=n;
while(i>=1)
{printf("%d!",i);
i--;
}
printf("0");
j=1;
while(j<=n)
{printf("%d!",j);
j++;
}
printf("%d!",n+1);
}

