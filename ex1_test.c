//ex1_test.c

#include <stdio.h>
 
void main()
{
    int a,b; /* 普通の変数の宣言 */ 
    int *ap,*bp;   /* ポインタ変数の宣言 */
 
    a = 3;
    b=4;
    printf("aのアドレスは，%p です\n", &a);  
 
    ap = &a;
    bp = &b;
    printf("ポインタ変数apの値（=aのアドレス）は，%p です\n", ap);  
    printf("ポインタ変数apの指している値は，%d です\n", *ap);  
    printf("ポインタ変数bpの値（=bのアドレス）は，%p です\n", bp);  
    printf("ポインタ変数bpの指している値は，%d です\n", *bp);  
    ap=bp;
    printf("ポインタ変数apの値（=aのアドレス）は，%p です\n", ap);  
    printf("ポインタ変数apの指している値は，%d です\n", *ap);  
    printf("ポインタ変数bpの値（=bのアドレス）は，%p です\n", bp);  
    printf("ポインタ変数bpの指している値は，%d です\n", *bp);  
}