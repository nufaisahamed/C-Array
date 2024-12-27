#include <stdio.h>
int main(){

    int arr[50]={1,5,3,4,6,5};

    int size =6;
    int positon =3;

// delete the element from begining

    for (int i = positon; i < size; i++)
    {
        arr[i] = arr[i+1];
    }

    size --;
// printing
for (int i = 0; i < size; i++)
{
    printf("%d",arr[i]);



}   

}