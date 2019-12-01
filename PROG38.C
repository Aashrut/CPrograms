//38. Write a program to print pattern as given below :
//       *
//      * *
//     * * *
//    * * * *
//   * * * * *
//  * * * * * *
// * * * * * * *

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
      printf(" ");
    }
    for(j=1;j<=i;j++)
    {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}
