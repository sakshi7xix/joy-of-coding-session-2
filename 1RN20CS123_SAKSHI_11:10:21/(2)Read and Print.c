#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int A[6]={560,660,590,760,480,960};
    float B[6]={97.50,66.0,79.25,76.55,98.45,96.40};
    char C[6]={'M','T','W','T','F','S'};
    
    for(int i=0;i<6;i++)
    {
       
        printf("%c   %d  %f \n",C[i],A[i],B[i]);
    }
    printf("\n the reverse order is \n");
    for(int i=5;i>-1;i--)
    {
       
        printf("%c   %d  %f \n",C[i],A[i],B[i]);
    }

}