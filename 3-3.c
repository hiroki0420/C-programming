#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int one,two,three,four,five,six,number,i;

void main(){
    one=two=three=four=five=six=number=0;
    for (i=1;i<=100;i++){
        number = (((rand()-1)/2147483647.)*6+1);
        switch(number){
            case 1: one++; break;
            case 2: two++; break;
            case 3: three++; break;
            case 4: four++; break;
            case 5: five++; break;
            case 6: six++; break;
        }
        number=0;
    }
    printf("%d,%d,%d,%d,%d,%d\n",one,two,three,four,five,six);
}
