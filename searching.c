#include <stdio.h>
int main()
{
    int arr[] = {1,5,2,3,4,5};
    int ele;
    printf("Enter the element you want search :");
    scanf("%d",&ele);
    int found =0;
    for (int i = 0; i < 6; i++)
    {
        printf("working!\n");
        if (ele == arr[i])
        {
            found = i;
            break;
        
        }
        
    }
    if (found)
    {
        printf("the element you are looking is found at index '%d' ", found);

    }
    else
    {
        printf("The element you are looking for is not found!");
    }
    
}