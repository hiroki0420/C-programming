/* 3-5.c */
#include<stdio.h>
#include<math.h>
void main(){
    int i;
    double f,lim,e1,e2;
    i=f=e1=e2=1;
    lim=1.e-12;
    do{
        e1=e2;
        f*=i++;
        e2+=(1/f);
        printf("%2d,%15.12f\n",i-1,e2);
    }while((e2-e1)>lim);
}