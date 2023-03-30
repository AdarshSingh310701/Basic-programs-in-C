#include<stdio.h>
#define Size 5
main()

{ int i,j,arr[Size],n;
printf("Enter a decimal number");
scanf("%d",&n);
i=0;
while(i<Size)
{ arr[i]=n%2;
n=n/2;
i++;
}
for(j=i-1;j>=0;j--)
{ printf("%d",arr[j]);
}
}
