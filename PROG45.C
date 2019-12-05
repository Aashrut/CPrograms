//45. Write a program to print patterns as given below:
//         1
//       1 2 3
//     1 2 3 4 5
//   1 2 3 4 5 6 7
// 1 2 3 4 5 6 7 8 9

#include<stdio.h>
int main()
{
  int i,j,k,n;
  printf("Enter the number : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(k=n-i;k>=1;k--)
    {
      printf("  ");
    }
    for(j=1;j<=2*i-1;j++)
    {
      printf("%d ",j);
    }
    printf("\n");
  }
  return 0;
}
