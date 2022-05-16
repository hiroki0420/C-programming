/* 8-2.c 配列のポインタ計算 */

#include<stdio.h>

int ary[5],i,n,*p,*q;

void main(){
    n=5;
    for(i=0;i<n;i++){
    ary[i]=i;
    }
    p = &ary[0];
    q = ary;
    printf("%p,%p\n",p,q);
    for(i=0;i<n;i++){
    p = &ary[i];
    q = ary+i;
    printf("%p,%p\n",p,q);
    }
}