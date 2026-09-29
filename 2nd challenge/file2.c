#include <stdio.h>

int main()
{

 float distance,mileage,price;
 float fuel,cost;

 scanf("%f", &distance);
 scanf("%f", &mileage);
 scanf("%f", &price);

 fuel = distance/mileage;
 cost = fuel*price;

 printf("fuel = %f L\n",fuel);
 printf("cost = %f\n",cost);

return 0;
}
