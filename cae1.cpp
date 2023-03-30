#include<stdio.h>
main()
{ int n,i,j,back,front;
printf("Enter any number");
scanf("%d",&n);
for(i=n;i>=0;i--)
{back=i*i;
printf("%d ",back);
}
for(j=1;j<=n;j++)
{front=j*j;
printf("%d ",front);
}
}
