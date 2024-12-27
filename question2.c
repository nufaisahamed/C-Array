// write the code to reverse the array and remove all the multiples of ‘3’ from it
#include <stdio.h>
int main()
{
    int arr[] = {2, 3, 5, 7, 10, 12, 15};
    int new = 0;
    int arr2[50];
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = size; i >= 0; i--)
    {
        if (arr[i] % 3 != 0)
            

        {
            arr2[new]=arr[i];
            new++;
        }
    }

       for (int i = 0; i < new; i++)
       {
        printf("%d,",arr2[i]);
       }
}