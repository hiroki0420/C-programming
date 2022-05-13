/* 5-3.c */
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    double alpha(double,double,double);
    double beta(int[],double[],double,double,int);
    double a,b,tbar,ybar,tsum,ysum;
    int k,data;
    tsum=ysum=0;
    printf("データの個数を入力してください\n");
    scanf("%d",&data);
    if(data<=0){
        printf("値が不正です\n");
        return(0);
    }
    double y[data];
    int t[data];
    for(k=0;k<data;k++){
        t[k]=k+1;
        tsum+=t[k];
        y[k]=(k+2)*(100+rand()%10);
        ysum+=y[k];
        printf("t=%d, y[%d]=%f\n",t[k],k,y[k]);
    }
    printf("tsum=%3.0f, ysum=%3.3f\n",tsum,ysum);
    tbar=tsum/data;
    ybar=ysum/data;
    printf("tbar=%f, ybar=%f\n",tbar,ybar);
    printf("\n");
    b = beta(t,y,tbar,ybar,data);
    a = alpha(b,tbar,ybar);
    printf("近似式は y = %3.3f + %3.3ft です。\n",a,b);
    for(k=0;k<data;k++){
        printf("y[%d]=%3.3f\n",k,a+b*(k+1));
    }
    return(0);
}


double alpha(double b, double tbar, double ybar){
    double a;
    a = ybar - b * tbar;
    return(a);
}


double beta(int t[], double y[], double tbar, double ybar, int i){
    int k;
    double b;
    double st2,syt;
    st2=syt=0;
    for(k=0;k<i;k++){
        syt += (y[k]-ybar)*(t[k]-tbar);
        st2 += (t[k]-tbar)*(t[k]-tbar);
    }
    b = syt/st2;
    return(b);
}