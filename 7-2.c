/* 7-2.c 10進数　*/
#include<stdio.h>

void binary(short int, short int[]);
void main(){
    short int i, n, bit[16];

    while(printf("値を入力してください。"),scanf("%hd",&n)!=EOF){
        binary(n,bit);

        printf("\n値は===>です。");
        for(i=0;i<=15;i++){
            printf("%d",bit[i]);
        }
        printf("\n");
    }
}

void binary(short int n, short int bit[]){
    short int i;

    for(i=15;i>=0;i--){
        if((n & 01)==1){
            bit[i]=1;
        }else{
            bit[i]=0;
        }
        n=n>>1;
    }
}