// ex1.c
#include <stdio.h>

void f(int);
void g();
void main(){
f(10);
}

void f(int N){
int k;
int i=5;
double *p = &i;

 for (k=0;k<5;k++){
    printf("*(p+%d)=%p,%lf\n",k,p,*p);
    p += 1;
    }
}

void g()
{
printf("Hello World\n");
}