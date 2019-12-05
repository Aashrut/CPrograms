//47. Write a program to print patterns as given below:
//         *
//       * # *
//     * # # # *
//   * # # # # # *
// * # # # # # # # *

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
      if(j==1 || j==(2*i-1))
      printf("* ");
      else
      printf("# ");
    }
    printf("\n");
  }
  return 0;
}
