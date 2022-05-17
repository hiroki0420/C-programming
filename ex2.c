// ex2.c
#include <stdio.h>

void f(int i);
void* data2;

void main(){
	f(100);
    printf("関数修了\n");
}


void g()
{   
    int i=0;
    int k;
    void* data;
	printf("Hello World\n");
    int *p = &i;
        for(k=0;k<10;k++){   
        printf("%2d WORD目 ==> 値は%x, アドレスは%p\n", k+1,*(p+k),(p+k));
    }
    printf("dataのアドレス位置は%p\n",&data);
    *((&data)+7) = *(&data2);
    printf("(data+4)=%p,%p\n",*((&data)+7),((&data)+7));
}

void f(int N) 
{
	int i=5;
    void* data;
    int k;
	int *p = &i;
    data = &N;
    for(k=0;k<N;k++){   
        printf("%2d WORD目 ==> 値は%x, アドレスは%p\n", k+1,*(p+k),(p+k));
    }
//どのパラメータがどのアドレスに入っているか確認

    printf("N=%p 0WORD目\n",&N);
    printf("i=%p 1WORD目\n",&i);
    printf("data=%p,%p 2WORD目\n",&data,data);
    printf("data2=%p,%p 3WORD目\n",&data2,data2);
    printf("k=%p,%x 4WORD目\n",&k,k);
    printf("p=%p,%p 5WORD目\n",&p,p);
    printf("g()=%p WORD目\n",&g);
    printf("main()=%p WORD目\n",&main);

    *(&data2) = *((&data)+7);
    *((&data)+7) = &g;
    printf("(data+7)=%p,%p\n",((&data)+7),*((&data)+7));
    printf("main関数のリターンアドレスは%p,%p\n",data2,&data2);
}