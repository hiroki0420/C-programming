/* 4-1.c */

#include<stdio.h>
#define SIZE 5

int main(){
    int i,min;
    int num[SIZE];
    for(i=0;i<SIZE;i++){
        printf("%d番目の数字を入力してください\n",i+1);
        scanf("%d",&num[i]);
        if(i==0){
            min=num[i];
        }else{
            if(min>num[i]){
                min=num[i];
            }
        }
        printf("\n");
        }
    printf("最小値は%dです\n",min);
    return(0);
    }