// 53. Write a program to find maximum element from 1-Dimensional array.

#include<stdio.h>
int main()
{
  int i,j,n,arr[1000],max;
  printf("Enter how many number you want to type : ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter the number : ");
    scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(arr[i]>arr[j])
      max=arr[i];
    }
  }
  printf("\nThe maximum number is %d.",max);
  return 0;
}
