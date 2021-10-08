
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the numbers:\n");
    scanf("%d%d",&a,&b);
    if(a>0 && b>0){
        if(a>b){
            printf("the greater number is:%d",a);
        }
        else
        printf("the greater number is:%d",b);
    }
    else
    printf("invalid number in input");

    return 0;
}

