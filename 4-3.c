/* 4-3.c 二分探索法*/

#include<stdio.h>
#define SIZE 100

int main(){
    int i,a[SIZE],num,half,point;
    half=point=SIZE/2; 
    for(i=0;i<SIZE;i++){
        a[i]=i+SIZE;
    }
    printf("調べる値を入力してください\n");
    scanf("%d",&num);
    
    if(num<SIZE||SIZE+100<=num){
        printf("値が不正です\n");
        return(0);
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
        printf("%dは%d番目の値です\n",num,point+1);
        return(0);
        }
    }