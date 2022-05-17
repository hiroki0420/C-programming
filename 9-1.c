/* 9-1.c */
#include<stdio.h>

char a[10];
void main(){
    int i=0;
    *(a+0) = 'C';
    *(a+1) = 'o';
    *(a+2) = 'b';
    *(a+3) = 'o';
    *(a+4) = 'l';
    *(a+5) = '\0';
    while(*(a+i)!='\0'){
        printf("%c",*(a+(i++)));
    }
}