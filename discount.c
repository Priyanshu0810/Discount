#include<stdio.h>
int main()
{
    int quantity;
    float total,discount,rate;

    printf("enter the quantity \n");
    scanf("%d",&quantity);

    printf("entar the rate \n");
    scanf("%f",&rate);

    if(quantity>100)
    discount=25.6;
    total=(quantity*rate)-(quantity*rate*discount/100);
    printf("total=Rs.%f\n %d\n",total);

    return 0;
}