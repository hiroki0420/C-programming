#include<stdio.h>

double main()
{
    short int a;
    int b;
    long int c;
    unsigned short int d;
    float e;
    double f;

    a=-30000;
    b=20000;
    c=20000000001;
    d=200;
    e=10000000000000000;
    f=200000000000;
    printf("%d\n%hd\n%ld\n%hu\n%f\n%f\n",a,b,c,d,e,f);
    return 0;
}
