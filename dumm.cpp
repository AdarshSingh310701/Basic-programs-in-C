#include <stdio.h>
int main() {
    float con_units;
    printf("Enter the consumed units: ");
    scanf("%f",&con_units);
    if(con_units>0 && con_units<=100){
        printf("the amount to be paid is: %0.2f", con_units*1);
        return 0;
    }
    else if(con_units>100 && con_units<=200){
         printf("the amount to be paid is: %0.2f", con_units*1.50);
        return 0;
    }
    else if(con_units>200 && con_units<=300){
        printf("the amount to be paid is: %0.2f", con_units*2);
        return 0;
    }
    else if(con_units>300 && con_units<=400){
        printf("the amount to be paid is: %0.2f", con_units*2.75);
        return 0;
    }
    else if(con_units>400 && con_units<=500){
        printf("the amount to be paid is: %0.2f", con_units*3.50);
        return 0;
    }
    else if(con_units>500 && con_units<=600){
        printf("the amount to be paid is: %0.2f", con_units*4.70);
        return 0;
    }
    else if(con_units>600 && con_units<=700){
        printf("the amount to be paid is: %0.2f", con_units*5);
        return 0;
    }
    else if(con_units>700){
        printf("the amount to be paid is: %0.2f", con_units*8.50);
        return 0;
    }
    return 0;
}
