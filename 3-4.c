/* 3-4.c */
#include <stdio.h>
    int i,k,product;

void main(){
    for(i=1;i<=9;i++){
        k=1;
        for(k=1;k<=9;k++){
            product=i*k;
            printf("%4d",product);
            product=0;
        }
        k=0;
        printf("\n");
    }
}