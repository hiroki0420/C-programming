// ex2.c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void f(int);
void h(double);

void main(){
    f(10);
    h(10);
}

void f(int N){
    int i=5;
    int k;
    int *p = &i;
    //*1
    for(k=0;k<=N-1;k++){
 //       printf("*(p+%d)=%x,%p\n",k,*p+k,&*p+k); //一文字あたり4byte
    }
}

void h(double N){
double i=5;
int k;
double *p = &i;
//*1
for(k=0;k<=N-1;k++){
    printf("*(p+%d)=%3.1lf,%p\n",k,*p+k,&*p+k);
    }
}

void g(){
printf("Hello World\n");
}