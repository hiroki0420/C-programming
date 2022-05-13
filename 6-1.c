/* 6-1.c 文字コードの対応表 */

#include<stdio.h>

void main(){
    int i;
    char c;

    for(i=65;i<=122;i++){
        c=i;
        printf("%3d=%2c, ",i,c);
        if((i-64)%5==0){
            printf("\n");
        }
    }
}