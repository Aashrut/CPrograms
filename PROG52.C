// 52. Write a program to find out which number is even or odd from list of 10 numbers using array.

#include<stdio.h>
int main()
{
  int i,arr[10];
  printf("Enter the 10 numbers.\n");
  for(i=0;i<10;i++)
  {
    printf("Enter the number : ");
    scanf("%d",&arr[i]);
  }
  printf("\nThe ODD numbers are : ");
  for(i=0;i<10;i++)
  {
    if(arr[i]%2 != 0)
    printf("%d ",arr[i]);
  }
  printf("\nThe EVEN numbers are : ");
  for(i=0;i<10;i++)
  {
    if(arr[i]%2==0)
    printf("%d ",arr[i]);
  }
  return 0;
}
