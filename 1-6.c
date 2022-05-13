#include<stdio.h>

int eng,jap,math;
float ave;
void main(){
    scanf("%d,%d,%d",&eng,&jap,&math);
    ave=(eng+jap+math)/3;
    printf("%4.2f\n",ave);
}
