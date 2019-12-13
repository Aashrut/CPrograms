// 65. Write a C program to use recursive calls to evaluate F(x) = x – x^3 / 3! + x^5 / 5 ! – x^7 / 7! + … x^n/ n!.

#include<stdio.h>
#include<math.h>
float rec(int x, int n);
int fact(int n);
int main()
{
  int x,n;
  float sum=0;
  printf("Enter the value of x : ");
  scanf("%d",&x);
  printf("Enter the value of n : ");
  scanf("%d",&n);
  sum=rec(x,n);
  printf("The sum is %f",sum);
  return 0;
}
float rec(int x,int n)
{
  float sum=x;
  if(n==1)
  {
    return sum+x;
  }
  else
  {
    if(n%2==0)
    {
      sum = sum - pow(x,2*n-1)/fact(2*n-1);
    }
    else
    {
      sum = sum + pow(x,2*n-1)/fact(2*n-1);
    }
  }
  rec(x,--n);
  return sum;
}
int fact(int n)
{
  if(n==1)
  {
    return 1;
  }
  return n*fact(n-1);
}
