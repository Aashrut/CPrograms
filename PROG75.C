// 75. Write a program to swap two values using pointers.

#include<stdio.h>
int swap(int *x,int *y);
int main()
{
  int a,b;
  printf("Enter the a : ");
  scanf("%d",&a);
  printf("Enter the b : ");
  scanf("%d",&b);
  printf("\nBefore swap, a = %d & b = %d",a,b);
  swap(&a,&b);
  printf("\nAfter swap, a = %d & b = %d",a,b);
  return 0;
}
int swap(int *x,int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
  return 0;
}
