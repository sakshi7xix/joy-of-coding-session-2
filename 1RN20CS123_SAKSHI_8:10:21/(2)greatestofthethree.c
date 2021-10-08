#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter three numbers\t");
    scanf("%d%d%d",&a,&b,&c);
    if(a>0 && b>0 && c>0){
        if(a>=b && a>=c){
            printf("the greatest number is:%d",a);
        }
        else if(b>=a && b>=c){
            printf("the greatest number is:%d",b);
        }
        else
        printf("the greatest number is:%d",c);
        
    }
    else
    printf("invalid number in input");

    return 0;
}

