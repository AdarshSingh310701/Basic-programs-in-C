#include<stdio.h>
 main()
{
   int powerUsage;
   float amount;
   printf("Enter the power consumed: ");
   scanf("%d", &powerUsage);
 
   if (powerUsage >= 0 && powerUsage <= 100)
      amount = powerUsage * 1.00;
   else if (powerUsage > 100 && powerUsage <= 200)
      amount = powerUsage * 1.50;
   else if (powerUsage > 200 && powerUsage <= 300)
      amount = powerUsage * 2.00;
   else if (powerUsage > 300 && powerUsage <= 400)
      amount = powerUsage * 2.75;
   else if (powerUsage > 400 && powerUsage <= 500)
      amount = powerUsage * 3.50;
   else if (powerUsage > 500 && powerUsage <= 600)
      amount = powerUsage * 4.70;  
   else if (powerUsage > 600 && powerUsage <= 700)
      amount = powerUsage * 5.00;
   else
      amount = powerUsage * 8.50;
   
   printf("Amount to be paid by customer is : %.2f", amount);
 
   return 0;
}
