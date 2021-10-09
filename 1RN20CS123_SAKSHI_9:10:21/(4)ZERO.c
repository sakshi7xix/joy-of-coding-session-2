#include <stdio.h>

int main()
{
    int n,i,sum;
    int a[10];
    printf("Number of digits?: \n");
    scanf("%d",&n);
    printf("Enter the digits: \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==0){
            continue;
        }
        printf("%d\t",a[i]);
    }

    return 0;
}

