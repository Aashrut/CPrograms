// 54. Write a C program to calculate the average, geometric and harmonic mean of n elements in an array.

#include<stdio.h>
#include<math.h>
int main()
{
  int i;
  double n,sum=0,sum1=0,mul=1,arr[1000],avg,gm,hm;
  printf("Enter how many numbers you want to calculate : ");
  scanf("%lf",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter the number : ");
    scanf("%lf",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
    sum=sum+arr[i];
  }
  avg=sum/n;
  for(i=0;i<n;i++)
  {
    mul=mul*arr[i];
  }
  gm=pow(mul,1/n);
  for(i=0;i<n;i++)
  {
    sum1=sum1+1/arr[i];
  }
  hm=n/sum1;
  printf("The average is %.3lf, the geometric mean is %.3lf, the harmonic mean is %.3lf",avg,gm,hm);
  return 0;
}
