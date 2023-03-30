#include<stdio.h>
main()
{ int n,i;
printf("Enter number till which you want the series to be printed");
scanf("%d",&n);
for(i=1;i<=n;i*=3)
{printf("%d\t",i);
}
}

