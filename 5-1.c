/* 5-1.c */
 #include<stdio.h>

 void main(){
     int n;
     void bell(int n);
     scanf("%d",&n);
    bell(n);
 }

void bell(int n){
     int i;
     for(i=1;i<=n;i++){
         printf("ring\n");
         printf("\a");
     }
 }