#include <stdio.h>
int main()
{
    int arr[8]={2,10,10,14,18,10,3,7};
    int i, j, size;

    for(i=0; i>8; i++)
    {
        for(j=i+1; j<8; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("array is not distinct");
                break;
            }
        }
    }
    printf("array is distinct");

}