#include<stdio.h>  
  
#define N 5  
  
int main()  
{  
    int i, key,num,count = 0;  
  int a[15]={2,2,6,5,4,3,2,1,8,9,10,9,5};
    
  
    printf("Enter the number to be searched ...\n");  
    scanf("%d", &key);  
  
    printf("\n");  
   i=0;
   num=0;
    while(i<15)
    {  
        if(a[i] == key)  
        {  
            printf("number %d found!!\n",key);
            printf("attempt number:%d\n\n",num+1);
        }
          num++;
        i++;
    }  
  
  
    printf("\n");  
  
    return 0;  
}  
