#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,res;
    char op;
    printf("\n Enter the operator:\n");
    scanf("%c",&op);
    printf("enter the operands:\n");
    scanf("%d%d",&a,&b);
    switch(op)
    {
        case '+': res=a+b;
        printf("\n %d= % d %c %d",res,a,op,b);
        break;
        case '-': res=a-b;
        printf("\n %d= %d %c %d",res,a,op,b);
        break;
        case '*': res=a*b;
        printf("\n %d= %d %c %d",res,a,op,b);
        break;
        case '/': 
        if(b!=0)
        {
            res=a/b;
            printf("\n %d=%d %c %d",res,a,op,b);
        }
        else{
            printf("\n division by zero");
            break;
        }
        default:printf("\n undefined operation");
    }
    getch();
}