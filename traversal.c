#include <stdio.h>

int main()
{
int numbers[]={1,2,3,4,5,6,7,8,9,10};
int size =sizeof(numbers)/sizeof(numbers[0]);
for (int i = 0; i < size; i++)
{
    printf("%d,",numbers[i]);
}

}