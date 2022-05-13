/* 5-5.c  再帰関数*/

#include<stdio.h>
#include<stdlib.h>

int i, n, product;

void main(){
    scanf("%d",&n);
    int func(int);
    product = func(n);
    printf("%d\n",product);
}

int func(int n){
    if(n>1){
        product = n* func(n-1);
    }else{
        product = 1;
    }
    return product;
}