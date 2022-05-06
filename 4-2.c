/* 4-2.c */

#include<stdio.h>
#define SIZE 10

int main(){
    int i,j,temp,num[SIZE];
    for(i=0;i<SIZE;i++){
        printf("%d番目の数字を入力してください\n",i+1);
        scanf("%d",&num[i]);
        if(i==0){
            continue;
        }else{
            for(j=i;j>=1;j--){
                if(num[j]<num[j-1]){
                    temp=num[j];
                    num[j]=num[j-1];
                    num[j-1]=temp;
                }
            }
        }
        printf("\n");
    }
    for(i=0;i<SIZE;i++){
        printf("%d ",num[i]);
        }
    printf("\n");    
    return(0);
    }