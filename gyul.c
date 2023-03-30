#include<stdio.h> 
int hcf(int a,int b);
 void main() 
 { 
     int i,j,h,a[100]; 
     
    
    
     for(i=0;i<4;i++) 
         { 
             printf("Enter a Number :"); 
             scanf("%d",& a[i]); 
         } 
             for(i=0;i<3;i++) 
                 { 
                      h=hcf(a[i],a[i+1]); 
                      a[i+1]=h; 
                 } 
                      printf("The HCF is :  %d",h); 
                    
   } 
        int hcf(int a,int b) 
          { 
               if(a%b==0) 
                { 
                       return b; 
                } 
               else 
               { 
                       return(hcf(b,a%b)); 
               } 
          }  
 
