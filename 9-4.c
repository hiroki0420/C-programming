/* 9-4.c strcat*/

#include<stdio.h>

void mystrcat(char*,char*);

void main(){
    char str1[30],str2[30];
    scanf("%s",str1);
    scanf("%s",str2);
    mystrcat(str1,str2);
    printf("%s\n",str1);
}

void mystrcat(char* str1,char* str2){
    int i,j,p;
    p=0;
    do{
        str1++;
        p++;
        }while(*(str1)!='\0');
        printf("%d\n",p);
    do{
        *(str1++)=*(str2++);
        p++;
    }while(*(str2)!='\0');
    *str1 = '\0';
    str1 -= (p+1);
    printf("%d\n",p);
}