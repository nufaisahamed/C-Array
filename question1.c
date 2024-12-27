// Write a code to replace all the multiples of five by 10 in an array

#include <stdio.h>
int main()
{
    int arr[] = {2, 3, 5, 7, 10, 12, 15};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 5 == 0)

        {
            arr[i] = 10;
        }
    }

    for (int i = 0; i < size; i++)
    {
        
        printf("%d ,", arr[i]);
    }
}

