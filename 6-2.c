/* 6-2.c */

#include<stdio.h>
void main(){
    int change(int);
    int i,j;
    int k[200];
    int c;
    int toupper(int);
    j=0;
    while((c=getchar())!=EOF){
        k[j++]=c;
    }
    for(i=0;i<=j-1;i++){
    c=toupper(k[i]);
    putchar(c);
    }
}

int change(int k){
    if(k>='a' && k<='z'){
        return k+'A'-'a';
    }else if(k>='A' && k<='Z'){
        return k+'a'-'A';
    }
}