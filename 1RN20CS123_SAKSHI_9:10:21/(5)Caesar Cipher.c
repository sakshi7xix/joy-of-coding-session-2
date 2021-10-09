
#include<stdio.h>
void main(){
    long r,num,temp,sum=0,i,temp_sum=0;
    printf("Enter 4 digit pin : ");
    scanf("%ld",&num);
    printf("\nThe number after adding 1 to each digit : "); 
    while(num!=0){
        r=num%10;
        temp=r+1;
        if(temp==10)
        temp=0;
        num=num/10;
        sum=(sum*10)+temp;
    }
    while(sum!=0){
        i=sum%10;
        sum=sum/10;
        temp_sum=(temp_sum*10)+i;
    }
    printf("%ld",temp_sum);
}