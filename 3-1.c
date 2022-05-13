#include <stdio.h>
#include <math.h>

int n,odd,even,count,sum1,sum2;

void main(){
    sum1=0;
    sum2=0;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        if(i%2==0){
            sum1+=i;
        }
        else{
            sum2+=i;
        }
        /* printf("i=%d,sum1=%d,sum2=%d\n",i,sum1,sum2); */
        i++;
    }
    printf("偶数の合計は%d,奇数の合計は%dです\n",sum1,sum2);
}