#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int a,b,c;
float S;


double calc(int a,int b,int c){
    double s=(a+b+c)/2.;
    double area=pow(s*(s-a)*(s-b)*(s-c),0.5);
    return area;
}

void main(){
    printf("aの値を入力して下さい\n");
    scanf("%d",&a);
    printf("bの値を入力して下さい\n");
    scanf("%d",&b);
    printf("cの値を入力して下さい\n");
    scanf("%d",&c);
    if (abs(b-c)<a && a<(b+c)){
        S=calc(a,b,c);
        printf("面積は%lfです\n",S);
        }
    else{
        printf("この条件では三角形は作成できません\n");
    }
}
     