/* 8-1.c スワップ関数 */

#include<stdio.h>

void swap(int*,int*);

void main(){
    int a,b;
    a=1;
    b=2;
    printf("swap前は%d,%d\n",a,b);
    swap(&a,&b);
    printf("swap後は%d,%d\n",a,b);
}

void swap(int* a, int* b){
    int temp1,temp2;
    temp1 = *a;
    temp2 = *b;
    *a = temp2;
    *b = temp1;
}