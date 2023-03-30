#include<stdio.h>
int main()
{float avg,sum;
int arr[10],i;
printf("Enter elements of the array");
for(i=0;i<10;i++)
{ scanf("%d",&arr[i]);
}
sum=0.0;
for(i=0;i<10;i++)
{ sum+=arr[i];
}
avg=sum/10;
printf("%.1f",sum);
printf(" The average of the array is: %.1f",avg);
return 0;
}
