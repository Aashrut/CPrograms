//26. Write a program to print first n prime numbers.
#include<stdio.h>
int main()
{
    int i=3,j,temp,n;
    printf("Enter the number n : ");
    scanf("%d",&n);
    if(n>=1)
    {
      printf("The prime numbers are as follows : \n");
      printf("2 ");
    }
    for(temp=2;temp<=n;i++)
    {
      for(j=2;j<i;j++)
      {
        if(i%j==0)
        break;
      }
      if(j==i)
      {
        printf("%d ",i);
        temp++;
      }
    }
    return 0;
}
