// 78. Write a program for sorting using pointer.

#include<stdio.h>
int main()
{
  int arr[30],temp,i,j,n;
  printf("how many number you want to enter : ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter the number : ");
    scanf("%d",&arr[i]);
  }
  printf("\nBefore sorting,");
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<i;j++)
    {
      if(arr[i]<arr[j])
      {
        temp=&arr[i];
        &arr[i]=&arr[j];
        &arr[j]=temp;
      }
    }
  }
  printf("\nAfter sorting,");
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
}
