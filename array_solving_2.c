#include<stdio.h>
int main(){
    int array [10]={49, 6, 78, 3, 74, 61, 15, 70, 63, 7};
    int length_1=sizeof(array)/sizeof(array[0]);
    int new_array [length_1];
    int length_2=0;
    int j=1;
    int k=0;
    for (size_t i = 0; i < length_1; i++)
    {   
       if (length_1==length_2)
       {
        break;
       }
       new_array[i+k]=array[i];
       length_2++;
       k++;
       if (length_1==length_2)
       {
        break;
       }
       new_array[i+k]=array[length_1-j];
       j++;
       length_2++;
    
    }
    for (size_t i = 0; i < length_2; i++)
    {   
        printf("%d ", new_array[i]);

    }
    
    
}