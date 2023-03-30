#include<stdio.h>
main()
{ int i=2,j=1,n;
printf("Enter number till which you want the series to be printed ");
scanf("%d",&n);
if(n%2==0)
{while(i<=n)
{
printf("%d\t",i);
i+=2;
}
}
else
{ while(j<=n)
{
printf("%d\t",j);
 j+=2;
}
}
}


