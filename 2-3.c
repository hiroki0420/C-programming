#include <stdio.h>
#include <math.h>

int eng1,eng2,eng3,inf1,inf2,add,class1,class2,money;


void main(){
    eng1=5000;
    eng2=4000;
    eng3=3000;
    inf1=6000;
    inf2=4000;
    add=5000;
    money=0;

    printf("英会話の級を入力してください(1級、2級、3級)\n");
    scanf("%d",&class1);
    printf("情報処理の級を入力してください(1級、2級)\n");
    scanf("%d",&class2);
    if (class1==1&&class2==1){
        money+=add;
    }
    if(class1==1){
        money+=eng1;
    }else if(class1==2){
        money+=eng2;
    }else{
        money+=eng3;
    }
    if(class2==1){
        money+=inf1;
    }else{
        money+=inf2;
    }
    printf("あなたの手当は%d円です\n",money);
}