#include<stdio.h>
#include<math.h>
main()
{ int n,i,k;
printf("Enter the number of terms in cube series");
scanf("%d",&n);
for(i=1;i<=n;i++)
{ k=pow(i,3);
printf("%d\t",k);
}
}
