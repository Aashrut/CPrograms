// 55. Write a program to sort given array in ascending order (Using Bubble sort).

#include<stdio.h>
int main()
{
  int i,j,n,arr[1000],temp;
  printf("Enter how many number you want to enter : ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("enter the number : ");
    scanf("%d",&arr[i]);
  }
  printf("Before sorting,");
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(arr[j]>arr[i])
      {
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
      }
    }
  }
  printf("\nAfter sorting,");
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  return 0;
}
