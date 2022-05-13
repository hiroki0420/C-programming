//
#include <stdio.h>
 
void main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *p;
    int i;

    p = &a[0];
    for(i=0;i<5;i++){
        printf(" 配列の %d 番目は%d,アドレスは%pです\n",i,*p,p);
        p += 1;
    }
}
