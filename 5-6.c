/* 5-6.c  二分探索法の定義関数化*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 100

int main(){
    int i,k,tbl[SIZE],num; 
    for(i=0;i<SIZE;i++){
        tbl[i]=i+SIZE;
    }
    printf("調べる値を入力してください\n");
    scanf("%d",&num);
    int bisrch(int[],int,int,int);
    k=bisrch(tbl,num,0,SIZE-1);
    if(k==1){
        printf("%dは存在します\n",num);
    }else{
        printf("値が不正です\n");
    }
}

int bisrch(int tbl[],int num,int a,int b){
    int half;
    int result;
    half=(a+b)/2;
    printf("a=%d,b=%d,half=%d,tbl[]=%d\n",a,b,half,tbl[half]);
    if(tbl[half]==num){
        num=1;
        return(num);
    }else if(num<tbl[half]&&tbl[a]<=num){
        b=half-1;
        num=bisrch(tbl,num,a,b);
    }else if(num>tbl[half]&&tbl[b]>=num){
        a=half+1;
        num=bisrch(tbl,num,a,b);
    }else{
        num=-1;
        return(num);
    }
}