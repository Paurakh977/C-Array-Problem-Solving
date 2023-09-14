#include <stdio.h>
int main()
{
    int array[3][3] = {
        {9, 2, 4},
        {6, 7, 10},
        {3, 8, 7}};
    int result_array[3][3];
    // printing the given array
    printf("Your given array\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    // solving:
    for (size_t i = 0; i < 3; i++)
    {

        for (size_t j = 0; j < 3; j++)
        {
            int x = array[i][j];
            int multi = 1;
            for (size_t k = 0; k < 3; k++)
            {
                if (x != array[i][k])
                {
                    multi *= array[i][k];
                }
            }

            result_array[i][j] = multi;
        }
    }
    // displaying Result
    printf("\nYour resulting array\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", result_array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
