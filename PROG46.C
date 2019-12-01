//46. Make Pascal's triangle. OR Write a program to print patterns as given below:
//          1
//         1 1
//        1 2 1
//       1 3 3 1
//      1 4 6 4 1

#include<stdio.h>
int main()
{
  int i,j,k,n,temp=1;
  printf("Enter the number : ");
  scanf("%d",&n);
  for(i=0;i<=n-1;i++)
  {
    for(k=n-i;k>=1;k--)
    {
      printf(" ");
    }
    for(j=0;j<=i;j++)
    {
      if(j==0 || i==0)
      temp=1;
      else
      temp=temp*(i-j+1)/j;
      printf("%d ",temp);
    }
    printf("\n");
  }
  return 0;
}
