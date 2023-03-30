#include<stdio.h>
int main()
{ int arr[10],i,small,large;
float avg,sum;
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
arr[0]=small;
for(i=0;i<10;i++)
{ 
if(arr[i]<small)
small=arr[i];
}
printf(" Smallest number in the array is: %d\n",small);
arr[0]=large;
for(i=0;i<10;i++)
{ 
if(arr[i]>large)
large=arr[i];
}
printf(" Largest number in the array is: %d\n",large);
return 0;
}
