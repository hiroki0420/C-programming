/* calculate */

#include <stdio.h>
#include <math.h>

int main()
{
    int unit,number,cost,price;
    scanf("%d,%d",&unit,&number);
    cost = unit*number+100;
    price = ceil(cost*0.85);

    printf("価格--->　%d円\n",price);
    return 0;
}