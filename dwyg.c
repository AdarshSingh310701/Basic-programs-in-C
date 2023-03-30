/*Name-Adarsh Singh
Roll no. - 17
Date- 29-04-2021
*/
#include<stdio.h>
int main()
{
printf("code by Adarsh Singh\n29 April \nsales report\n");
	
	int a[5],i,b, max, min,t=0;
	float avg;
	b=1995;
    for (i=0;i<5;i++)
    {
    	printf("Enter the items exported in %d - %d\n",b,b+1);
    	scanf("%d",&a[i]);
    	b++;
	}
      
	printf("Year");

    for (i=0;i<5;i++)
    {
    	printf("%d - %d\t",b,b+1);
		b++;
	}
	
	printf("items");

	for (i=0;i<5;i++)
    {
		printf("\t%d\t",a[i]);
	}
	
	max=a[0];
    for(i=0;i<5;i++)
		{
    		if(max<a[i])
				{
    				max=a[i];
				}
		}
	printf("\nMax item export is %d",max);
	min=a[0];
	for(i=0;i<5;i++)
	{
		if(min>a[i])
			{
				min=a[i];
			}
	}
      printf("\nMin export is %d",min);
      
    for(i=0;i<5;i++)
    {
    	t = t + a[i];
	}
	
	 avg =(float) t/5;
	printf("\nThe total  is %d ",t);
	printf("\nThe Average  is %f ",avg);

    
	return(0);
	
  
}
