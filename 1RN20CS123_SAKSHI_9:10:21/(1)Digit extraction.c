#include<stdio.h>
int main(){
    int num,count;
    printf("enter the number: \n");
    scanf("%d",&num);
    printf("the digits are:\n");
    while(num>0){
        int mod = num%10;
        printf("%d\n",mod);
        count+=1;
        num=num/10;
    }
    printf("number of digits are:%d\n",count);
    return 0;
    
}