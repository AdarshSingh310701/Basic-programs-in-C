#include<stdio.h>

int main()
{
	int b[10],n,i,j,y,item,avg;
	float a[10];
	int max,min;
	printf(" enter the number of array");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf(" enter the year=");
		scanf("%f",&a[i]);
		printf(" enter the item=");
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		
		avg=(b[i]/n);
	}
	printf("\navg=%d",avg);

    max=b[0];
    for(i=1;i<n;i++){
    	if(max<b[i]){
    		max=b[i];
		}
		
	}
	printf("\nmax item export is=%d",max);
	min=b[0];
	for(i=1;i<n;i++)
	{
		if(min>b[i]){
			min=b[i];
		}
	}
      printf("\n min export is =%d",min);
}
