/* 9-6.c strcmp*/

#include<stdio.h>

int mystrcmp(char*,char*);

void main(){
    char str1[30],str2[30];
    int cmp;
    scanf("%s",str1);
    scanf("%s",str2);
    cmp = mystrcmp(str1,str2);
    if(cmp<0){
        printf("%s > %s \n",str2,str1);
    }else if(cmp==0){
        printf("%s = %s \n",str1,str2);
    }else{
        printf("%s > %s \n",str1,str2);
    }

}

int mystrcmp(char* str1,char* str2){
    int i,cmp,p;
    p=0;
    for(i=0;i<30;i++){
        if(*(str1+i)!=*(str2+i)){
            cmp=*(str1+i)-*(str2+i);
            i=31;
        }
    }
    return cmp;
}