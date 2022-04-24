#include <stdio.h>

int code,score,sum,average,counte,countm,countj;
float eng,math,jap;

void main(){
    eng=jap=math=0.;
    counte=countm=countj=0;
    printf("code=1:英語,code=2:数学,code=3:国語,ctrl+dで終了\n");
    while (printf("? "),scanf("%d,%d",&code,&score)!=EOF){
        if(code==1){
            eng+=score;
            counte++;
        }
        else if(code==2){
            math+=score;
            countm++;
        }
        else if(code==3){
            jap+=score;
            countj++;
        }
        else{
            printf("codeエラー　: %d\n",code);
        }
    }   
    printf("\n\n");
    printf("英語：平均%f点\n",eng/counte);
    printf("数学：平均%f点\n",math/countm);
    printf("国語：平均%f点\n",jap/countj);
}