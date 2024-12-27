#include<stdio.h>
int main(){
  int arr[50];
  int size=5;
  int pos;

  for (int i = 0; i < size; i++)
  {
    printf("enter your %d elements:",i);
    scanf("%d",&arr[i]);
    
  }
  printf("enter the postion you want delete:",size-1);
  scanf("%d",&pos);
  for (int i = pos; i < size-1; i++)
  {
    arr[i] = arr[i + 1];
  }
  size--;
  for (int i = 0; i < size; i++)
  {
    printf("%d",arr[i]);
    
  }
  
}