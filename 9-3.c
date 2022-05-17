/* 9-3.c strcpy*/

#include<stdio.h>

void mystrcpy(char*,char*);

void main(){
    char str1[10],str2[10];
    scanf("%s",str1);
    mystrcpy(str1,str2);
    printf("%s\n",str2);
}

void mystrcpy(char* str1,char* str2){
    while(*(str2++) =*(str1++));
}