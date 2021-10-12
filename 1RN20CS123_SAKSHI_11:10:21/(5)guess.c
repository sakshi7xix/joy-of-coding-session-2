#include<stdio.h>  
  
#define N 5  
  
int main()  
{  
    int i, key,num,count = 0;  
  int a[10]={2,6,5,4,3,2,1,8,9,10};
    
  
    printf("Enter the number to be searched ...\n");  
    scanf("%d", &key);  
  
    printf("\n");  
   i=0;
   num=0;
    while(i<10)
    {  
        if(a[i] == key)  
        {  
            printf("number found\n");
            break;
        }
          num++;
        i++;
    }  
  
  printf("number of attempts is %d", num+1);  
  
    printf("\n");  
  
    return 0;  
}  
