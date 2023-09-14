//  Output: 5, nums = [0,1,4,0,3,_,_,_]
#include<stdio.h>
int main(){
    int nums[]={0,1,2,2,3,0,4,2};
    int length=sizeof(nums)/sizeof(nums[0]);
    int k=0,val=2;
    int i=0;
    while (i<length)
    {
        if (nums[i]==val)
        {
            for (size_t j = i; j < length-1; j++)
            {
                nums[j]=nums[j+1];
            }
            length--;
        }
        
        else if (nums[i]!=val)
        {
            k++;
            i++;
        }
        
    }
    printf("\n Modified nums: \n");
    for (size_t i = 0; i < length; i++)
    {
        printf("%d ",nums[i]);
    }
    
    printf("\nOutput (k) ",k);

}