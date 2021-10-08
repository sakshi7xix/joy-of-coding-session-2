
#include <stdio.h>

int main()
{
    double rank;
    printf("Enter your rank:\n");
    scanf("%le",&rank);
    if(rank>0 && rank<=3250){
        printf("Congratulations!! you get CSE branch\n");
        printf("Congratulations!! you get ISE branch\n");
        printf("Congratulations!! you get E and C branch\n");
        printf("Congratulations!! you get MEC branch\n");
    }
    else if(rank<=6505){
        printf("Congratulations!! you get ISE branch\n");
        printf("Congratulations!! you get E and C branch\n");
        printf("Congratulations!! you get MEC branch\n");
    }
    else if(rank<=12012){
        printf("Congratulations!! you get E and C branch\n");
        printf("Congratulations!! you get MEC branch\n");
    }
    else if(rank<=22340){
        printf("Congratulations!! you get MEC branch\n");
    }
    else if(rank>22340){
        printf("sorry to inform you! you don't get any branch");
    }
    
    return 0;
}

