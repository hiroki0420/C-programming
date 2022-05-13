// ex3.c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void f(int i);

void main(){
    f(10);
}

void f(int N){
    int i=5;
    int k;
    int *p = &i;
    //*1
    *p;
    for(k=0;k<=N-1;k++){
        printf("*(p+%d)=%x,%p\n",k,*p+k,&*p+k); //一文字あたり4byte=32bit
    }
}

void g(){
printf("Hello World\n");
}
