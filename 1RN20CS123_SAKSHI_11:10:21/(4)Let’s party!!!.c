#include <stdio.h>

int main()
{
    long int mr_int[]={560,660,590,760,480,960};
    int i;
    double mr_float[]={97.50,66.00,79.25,76.55,98.45,96.40};
 
    int length1 = sizeof(mr_int)/sizeof(mr_int[0]);    
        
    int max1 = mr_int[0];    
        
    for (int i = 0; i < length1; i++) {     
       if(mr_int[i] > max1)    
           max1 = mr_int[i];    
    }      
    printf("Mr. int highest pay is: %d\n", max1); 
   
    int length2 = sizeof(mr_float)/sizeof(mr_float[0]);    
    float max2 = mr_float[0];    
    for (int i = 0; i < length2; i++) {     
       if(mr_float[i] > max2)    
           max2 = mr_float[i];    
    }      
    printf("Mr. float highest pay is: %0.2f\n", max2);  
    
    return 0;
}
