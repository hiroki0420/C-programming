/* 9-7.c 抽出　*/

#include<stdio.h>

int mystrext(char*,char*,int, int);

void main(){
    int result,m,n;
    char s[200],t[200];
    printf("文字列を入力してください\n");
    scanf("%s",t);
    printf("抽出する位置を入力してください\n");
    scanf("%d",&m); 
    n=3; //文字数
    result = mystrext(s,t,m,n);
    if(result==0){
        printf("抽出に失敗しました\n");
    }else if(result==1){ 
        printf("%s\n",s);
    }
}

int mystrext(char* s,char* t,int m, int n){
    int len,i;
    t += m;
    for(i=0;i<n;i++){
        *s++ = (*t++);
    }
    s = "\0";
    s -= n;
    return 1;
}