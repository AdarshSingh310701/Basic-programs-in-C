#include<stdio.h>
main()
{ int n,arr[5]={1,2,3,4,5},revarr[5],i;
for(i=0;i<5;i++)
{ printf("%d",*(arr+i));
}

for(i=0;i<5;i++)
{ **(revarr+i);
}
for(i=0;i<5;i++)
{ printf("%d\n",*(revarr+i));
}
for(i=0;i<5;i++)
{

printf("%d\n",*(revarr+(5-i-1)));
} }
