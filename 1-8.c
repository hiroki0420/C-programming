#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float a,b,c;

double ave(float a,float b,float c){
    double z;
    z=pow(a*b*c,1./3);
    return z;
}

void main(){
    double z;
    double ave(float a,float b,float c);
    printf("a,b,cの値を正で入力してください\n");
    scanf("%f,%f,%f",&a,&b,&c);
    if (a<0||b<0||c<0){
        printf("エラー：負の値が入力されました\n");
        exit(0);
    }
    z=ave(a,b,c);
    printf("相乗平均は%lfです\n",z);
    printf("a=%lf,B=%lf,C=%lf\n",a,b,c);
}



