/* 9-5.c strlen */

#include<stdio.h>

int mystrlen(char*);

void main(){
    char str1[30];
    int length;
    scanf("%s",str1);
    length = mystrlen(str1);
    printf("%d\n",length);
}

int mystrlen(char* str1){
    int i,length;
    length=0;
    do{
        str1++;
        length++;
        }while(*(str1)!='\0');
    return length;
}