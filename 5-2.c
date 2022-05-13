/* 5-2.c 二分探索法の定義関数化*/

#include<stdio.h>
#define SIZE 100

int main(){
    int i,k,a[SIZE],num,half,point;
    half=point=SIZE/2; 
    for(i=0;i<SIZE;i++){
        a[i]=i+SIZE;
    }
    printf("調べる値を入力してください\n");
    scanf("%d",&num);
    int bisrch(int[],int,int,int);
    k=bisrch(a,num,half,point);
    if(k<=0){
        printf("値が不正です\n");
    }else{
        printf("%dは%d番目の値です\n",num,k);
    }
}

    int bisrch(int a[],int num,int half,int point){
    if(num<SIZE||SIZE+100<=num){
        return(-1);
    }else{
        do{
            if(a[point]==num){
                break;
            }else if(a[point]<num){
                half=(half+1)/2;
                point+=half;
            }else{
                (half+1)/2;
                point-=half;
            }
            printf("half=%d,point=%d\n",half,point);
        }while(half!=0);
        return(point+1);
        }
    }