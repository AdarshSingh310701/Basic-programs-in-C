#include <stdio.h>

//int max(int [],int);
void read(int arr[], int);
void disp(int arr[], int);
int main()
{
	int a[10],n;
	printf("Enter size of array:");
	scanf("%d",&n);
	read(a,n);
	disp(a,n);
	avg(a,n);
}
void read(int arr[10], int n)
{
    int i ;
    printf("Enter the marks ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i];
    }
}
void disp(int arr[10],int n)
{
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    min=arr[0];
    for(i=0;i<n;i++)
    {
        arr(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("maximum =%d",max);
    printf("minimum =%d",min);
}
void avg(int arr[10],int n)
{
    float ave;
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    ave=sum/n;
    printf("Average =%f",avg);
}
