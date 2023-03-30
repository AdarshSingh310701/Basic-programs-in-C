#include<stdio.h>
int cube(int number)
{ int n2,cube,cubesum=0;
while(number!=0)
{n2 = number%10;
cube = n2*n2*n2;
cubesum = cubesum + cube;
number = number/10; 
}
printf("Sum of cube of digits of the entered number is %d\t", cubesum);
}
int main()
{
int num;
printf("Enter a number to find sum of cube of digits of the entered number ");
scanf("%d", &num); 
cube(num);
return 0 ;
}

