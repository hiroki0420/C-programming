#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int theta;
float a,b,c,rad;

void main(){
    loop:
    scanf("%f,%f,%d",&b,&c,&theta);
    if (b<0||c<0)
        exit(0);

    rad=3.1415926535897932384626433832*theta/180;
    a=pow((pow(b,2)+pow(c,2)-2*b*c*cos(rad)),0.5);
    printf("%f\n",a);
    goto loop;
    }

