#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float a,b,c,pita;

void func(float a,float b,float c){
    if(a<b&&b<c){
        pita=pow(pow(a,2)+pow(b,2),0.5);
        if(pita==c){
            printf("これは正三角形になります\n");
        }
        else{
        printf("これは正三角形になりません\n");
        }
    }
    else if(a<b&&c<b){
        pita=pow(pow(a,2)+pow(c,2),0.5);
        if(pita==b){
            printf("これは正三角形になります\n");
        }
        else{
            printf("これは正三角形になりません\n");
        }
    }
    else{
        pita=pow(pow(b,2)+pow(c,2),0.5);
        if(pita==c){
            printf("これは正三角形になります\n");
        }
        else{
        printf("これは正三角形になりません\n");
        }
    }
}


int main(){
    printf("aの値を入力して下さい\n");
    scanf("%f",&a);
    printf("bの値を入力して下さい\n");
    scanf("%f",&b);
    printf("cの値を入力して下さい\n");
    scanf("%f",&c);
    if (abs(b-c)<a && a<(b+c)){
        printf("計算あり");
        func(a,b,c);
        return(0);
    }
    else{
        printf("計算なし");
        printf("三角形ができません\n");
    }
}
