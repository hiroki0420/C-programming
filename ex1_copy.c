// ex1.c
#include <stdio.h>

void f(int);
void h(double);

void main(){
f(10);
}

void f(int N){
int i=5;
int *p = &i;
//*1
printf("%p,%d\n", p,*p);
}

void g()
{
printf("Hello World\n");
}
