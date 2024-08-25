
/*Write a program that calculates the price of Oil to be purchased by the customer. It takes input
of purchased amount of oil, today’s rate/liter and discount rate. Then, Vat (20%) and the
entered discount to be given to the customer. Final price should also be “floored” to the nearest
hundredth value. Also, two tk per purchase to be donated*/

/*
amount
tk per liter
-discount rate
+vat(20*)
floored
-2tk donation
*/

#include <stdio.h>
#include <math.h>

int main(){
    float amount_oil;
    float rate_liter;
    float discount_rate;
    
    printf("purchase amount of oil: ");
    scanf("%f",&amount_oil);
    printf("Today's price tk/liter: ");
    scanf("%f",&rate_liter);
    printf("discount tk/liter: ");
    scanf("%f",&discount_rate);

    float cost = amount_oil * rate_liter;
    float discounted_cost = (discount_rate/100)*cost;
    float vat_cost = 0.2*cost;
    float donation = 2;
    float total = (cost-discounted_cost)+(vat_cost+donation);
    

    printf("\ncost before discount: %.2f tk\n",cost);
    printf("discount:             %.2f tk\n",discounted_cost);
    printf("vat(20%%):             %.2f tk\n",vat_cost);
    printf("donation(2tk/l):      %.2f tk\n",donation);
    printf("------------------------------------\n");
    printf("total cost to pay:    %f tk\n",total);
    printf("flored amount to pay: %f tk\n",(floor(total*100)/100));
}
