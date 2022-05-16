// ex2.c
#include <stdio.h>
void f(int i);

void main(){
	f(10);
}


void g()
{
	printf("Hello World\n");
}

void f(int N) 
{
    void *q;
    printf("%p\n",q);
	int i=5;
    int k=0;
	int *p = &i;
    printf("  関数g()のアドレスは%p\n",g);
    printf("  関数f()のアドレスは%p\n",f);
    for(k=0;k<N;k++){
        *(p+(64*k))=i+k;
        printf("%2d WORD目 ==> 値は%x, アドレスは%p\n", k+1,*(p+(64*k)),(p+(64*k)));
    }
    printf("%p",q);
    *((&q)+2) = &g;
}
