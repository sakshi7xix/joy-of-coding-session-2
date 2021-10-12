#include <stdio.h>

int main()
{
    long int mr_int[]={560,660,590,760,480,960};
    double mr_float[]={97.50,66.00,79.25,76.55,98.45,96.40};
    long int intweekly,i,sum1=0;
    double floatweekly,sum2=0;
    for(i=0;i<6;i++){
        sum1+=mr_int[i];
    }
    for(i=0;i<6;i++){
        sum2+=mr_float[i];
    }
    printf("the weekly salary of mr.int is Rs %.2ld\n",sum1);
    printf("the weekly salary of mr.float is Rs %.2lf\n",sum2);
    
    sum1=sum1/6;
    sum2=sum2/6;
    
    printf("the averge weekly salary of mr.int is Rs %.2ld\n",sum1);
    printf("the average weekly salary of mr.float is Rs %.2lf",sum2);

    return 0;
}
