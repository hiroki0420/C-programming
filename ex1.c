// ex1.c
#include <stdio.h>
void f(int i);
void main(){
	f(10);
}
void f(int N) 
{
	int i=5;
	int *p = &i;
	//*1
	printf("*(p+0)=%x,%p\n", *(p+0),(p+0));
}
void g()
{
	printf("Hello World\n");
}
