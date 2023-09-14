#include <stdio.h>
int main(){
    int array1[]={1, 3, 5, 7, 9};
    int array2[]={2, 4, 6, 8, 10};
    int lenght_of_array1=sizeof(array1)/sizeof(array1[0]);
    int lenght_of_array2=sizeof(array2)/sizeof(array2[0]);
    int new_array[lenght_of_array1+lenght_of_array2];
    int lenght_of_new_array=lenght_of_array1+lenght_of_array2;
    // merging array_1
    for (size_t i = 0; i < lenght_of_array1; i++)
    {
        new_array[i]=array1[i];
        
    }
    // merging array_2
    int j=0;
    for (size_t i = lenght_of_array1; i < (lenght_of_new_array) ; i++)
    {   
        new_array[i]=array2[j];
        j++;
    }
    // displying the merged array
    for (size_t i = 0; i < lenght_of_new_array; i++)
    {
        printf("%d ",new_array[i]);
    }
    // SORTING
    for (size_t i = 0; i < lenght_of_new_array; i++)
    {
       for (size_t k = i+1; k < lenght_of_new_array; k++)
       {
            if (new_array[i]>new_array[k])
            {
                int store=new_array[i];
                new_array[i]=new_array[k];
                new_array[k]=store;
            }
            
       }
       
    }
    // displying the sorted array
    printf("\n");
    
     for (size_t i = 0; i < lenght_of_new_array; i++)
    {
        printf("%d ",new_array[i]);
    }
}