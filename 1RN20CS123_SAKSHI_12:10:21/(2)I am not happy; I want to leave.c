#include <stdio.h>
int main()
{
    int arr[11] = {2,6,10,14,18,3,7,11,15,19};
    int key, i, index = -1;
    printf("Enter element to delete\n");
    scanf("%d",&key);
    for(i = 0; i < 11; i++)
    {
        if(arr[i] == key)
        {
            index = i;
            break;
        }
    }

    if(index != -1)
    {
        for(i = index; i < 11 - 1; i++)
            arr[i] = arr[i+1];

        printf("New Array : ");
        for(i = 0; i < 11 - 1; i++)
            printf("%d ",arr[i]);
    }
    return 0;
}