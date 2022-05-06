/* 4-4.c 表引き */
#include<stdio.h>
#include<stdlib.h>

void main(){
    int i,j,jenre,number,sum,group;
    i=5;
    j=4;
    int table[i][j];
    table[0][0]=1;
    table[1][0]=5;
    table[2][0]=10;
    table[3][0]=30;
    table[4][0]=100;
    table[0][1]=2000,table[0][2]=5000,table[0][3]=10000;
    table[1][1]=1900,table[1][2]=4800,table[1][3]=9600;
    table[2][1]=1800,table[2][2]=4600,table[2][3]=9200;
    table[3][1]=1700,table[3][2]=4400,table[3][3]=8800;
    table[4][1]=1600,table[4][2]=4200,table[4][3]=8400;
    printf("種目1:舞踏　2:水泳　3:庭球\n");
    scanf("%d",&jenre);
    if(jenre>3||jenre<1){
        printf("不正な値です\n");
        exit(0);
    }
    printf("グループの人数を入力してください\n");
    scanf("%d",&group);
    if(group<1){
        printf("不正な値です\n");
        exit(0);
    }
    j=jenre;
    sum=group*table[0][j];
    for(i=0;i<5;i++){
        if(table[i][0]<group){
            sum=group*table[i][j];
        }
    }
    printf("人数は%d人で単価は%d円、合計金額は%d円です。\n",group,sum/group,sum);
}