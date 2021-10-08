#include <stdio.h>

int main()
{
    long int books;
    long int cost,x,y;
    printf("Enter the number of books\n");
    scanf("%ld",&books);
    cost=books*10;
    if(books<=10000){
        printf("No discount!!!\nthe total cost is:%ld",cost);
    }
    if(books>10000 && books<=15000){
        x=cost-(cost*0.1);
        printf("Hey!! you got 10%% discount\n");
        printf("the total cost is:Rs %ld",x);
    }
    if(books>15000 && books<=20000){
        y=cost-(cost*(0.2));
        printf("Hey!! you got 20%% discount");
        printf("the total cost is:%ld",y);
    }

    return 0;
}
