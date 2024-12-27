#include<stdio.h>
int main()
{
// char alpha[]={'A','B','C','D','E'};
char string[5];
for (int i = 0; i < 5; i++)
{

    printf("Enter %d character :",i);
    scanf(" %c",&string[i]);
    
}
for (int i = 0; i < 5; i++)
{
    printf("%c,", string[i]);
}

}