#include<stdio.h>
int Intersection(int d[100],int e[100],int u,int v);
int Union(int a[100],int b[100],int x,int y);
int main()
{ int n,football[100],cricket[100],i,j=0,m,t;
printf("Please Enter total number of students: ");
scanf("%d",&t);
printf("Now Please enter number of students who play football: ");
scanf("%d",&m);
printf("Please enter roll number of students who play football: ");
for(i=0;i<m;i++)
{ scanf("%d",&football[i]);
}
n=t-m;
printf("Now Please enter roll number of students who play cricket: ");
for(i=0;i<n;i++)
{ scanf("%d",&cricket[i]);
}
Union(football,cricket,m,n);
Intersection(football,cricket,m,n);
return 0;

}
int Intersection(int d[100],int e[100],int u,int v) 
{ 
int f[100],i,j,k=0,point=0; 
for(i=0;i<u;i++) 
{ 
point=0; 
for(j=0;j<v;j++) 
{ 
if(d[i]==e[j]) 
{ point=1; 
break; 
} 
} 
if(point==1) 
{ f[k]=d[i]; 
k++; 
} 
} 
if(k==0)
{
printf("\nIntersection is a null set therefore no student plays both cricket and football\n");
}else{
printf("\nIntersection: { "); 
for(i=0;i<k;i++) 
{ 
printf("%d ",f[i]); 
}
printf("}"); 
}
return 0;
}
int Union(int a[100],int b[100],int x,int y) 
{ 
 int c[100],i,j,k=0,point=0; 
 for(i=0;i<x;i++) 
{ c[k]=a[i]; 
  k++; 
} 
for(i=0;i<y;i++) 
{ point=0; 
for(j=0;j<x;j++) 
{ 
if(b[i]==c[j]) 
{ 
point=1; 
break; 
} 
} 
if(point==0) 
{ 
c[k]=b[i]; 
k++; 
} 
} 
printf("\nUnion: { "); 
for(i=0;i<k;i++) 
{ 
printf("%d ",c[i]); 
}
printf("}"); 
return 0;
} 
