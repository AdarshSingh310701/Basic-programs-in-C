#include <stdio.h>

int main()
{
  int a[100], i, size, sum=0;
  printf("Enter the size of array\n");
  scanf("%d",&size);
  printf("Enter the array elements:\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&*(a+i));
  }
  for(i=0;i<size;i++)
  {
    if(*(a+i)%2==0)
	{
    sum+=*(a+i);
    }
  }
  printf("The sum of even elements of the array is %d", sum);
  return 0;
}
