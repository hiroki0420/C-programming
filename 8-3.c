/* 8-3.c 配列の最大最小ポインタ*/

#include<stdio.h>

int ary[5],i,n,p,q;
int max(int[]), min(int*);

void main(){
    n=5;
    printf("値を5つ入力してください\n");
    for(i=0;i<n;i++){
        scanf("%d",&ary[i]);
    }
    p=max(ary);
    q=min(ary);
    printf("最大値は%d、最小値は%dです\n",p,q);
}

int max(int a[]){
    int i,max;
    max=a[0];
    for(i=1;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}

int min(int *b){
    int i,min;
    min=*b;
    for(i=1;i<5;i++){
        if(*(b+i)<min){
            min = *(b+i);
        }
    }
    return min;
}
