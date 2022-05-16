/* 8-4.c 配列のポインタ表記 */

#include<stdio.h>

int ary[3][4],i,k,a,p;
int sum_a(int[][4],int,int),sum_p(int(*)[4],int,int);

void main(){
    for(i=0;i<3;i++){
        for(k=0;k<4;k++){
            ary[i][k]=1;
        }
    }
    a=sum_a(ary,3,4);
    p=sum_p(ary,3,4);
    printf("a=%d,p=%d\n",a,p);
}

int sum_a(int ary[][4],int l,int c){
    int sum=0;
    for(i=0;i<l;i++){
        for(k=0;k<c;k++){
            sum += ary[i][k];
            printf("i=%d,k=%d,sum1=%d\n",i,k,sum);
        }
    }
    return sum;
}

int sum_p(int (*ary)[4],int l,int c){
    int sum=0;
    for(i=0;i<l;i++){
        for(k=0;k<c;k++){
            sum += (*(ary+i))[k];
            printf("i=%d,k=%d,sum2=%d\n",i,k,sum);
        }
    }
    return sum;
}


