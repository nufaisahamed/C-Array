#include <stdio.h>

// insert  in right

int main()
{

    int arr[50];
    int size = 5;
    int ele;

    for (int i = 0; i < size; i++)
    {
        printf("Enter %d Element :", i);
        scanf("%d", &arr[i]);
    }
    printf("enter the value you want insert :");
    scanf("%d", &ele);

    arr[size] = ele;
    size++;

    for (int i = 0; i < size; i++)
    {
       printf(" %d",arr[i]);
    }
}

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// insert at begining

// int main()
// {

//     int arr[50];
//     int size = 5;
//     int ele;

//     for (int i = 0; i < size; i++)
//     {
//         printf("Enter %d Element :", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("enter the value you want insert :");
//     scanf("%d", &ele);

//     for (int i = size-1; i >=0; i--)
//     {
//         // shifing the element to right side till first element
//        arr[i+1]=arr[i];
//     }
//     arr[0]=ele;
//     size++;

//     for (int i = 0; i < size; i++)
//     {
//         printf("%d,", arr[i]);

//     }
// }
//   ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// insert in a specific postion/

// int main()
// {

//     int arr[50];
//     int size = 5;
//     int ele;
//     int pos;
//     for (int i = 0; i < size; i++)
//     {
//         printf("Enter %d Element", i);
//         scanf("%d", &arr[i]);
//     }
//     printf("enter the element you want to insert :");
//     scanf("%d", &ele);
//     printf("enter the position you want to insert :");
//     scanf("%d", &pos);
//     for (int i = size; i >= pos; i--)
//     {
//         arr[i + 1] = arr[i];
//     }
//     arr[pos] =ele
// }