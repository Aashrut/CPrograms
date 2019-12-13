// 64. Write a function Exchange() to interchange the values of two variables, say x and y. illustrate the use of this function in a calling function.

#include<stdio.h>
int Exchange(int *x, int *y);
int main()
{
  int x,y;
  printf("Enter the x and y : ");
  scanf("%d %d",&x,&y);
  printf("\nBefore exchange, x = %d and y = %d",x,y);
  Exchange(&x,&y);
  printf("\nAfter exchange, x = %d and y = %d",x,y);
  return 0;
}
int Exchange(int *x,int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
  return 0;
}
