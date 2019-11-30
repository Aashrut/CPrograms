//33. Read five persons height and weight and count the number of person having height greater than 170 and weight less than 50,
#include<stdio.h>
int main()
{
    int i,a[5][2],hmaxcount,wmincount;
    printf("Enter the height and weight as follows.\n");
    for(i=0;i<=4;i++)
    {
      printf("Enter the height and the weight of the person : \n");
      scanf("%d %d",&a[i][0],&a[i][1]);
    }
    hmaxcount=0;
    wmincount=0;
    for(i=0;i<=4;i++)
    {
      if(a[i][0]>170)
      hmaxcount++;
      if(a[i][1]<50)
      wmincount++;
    }
    printf("\nThe number of person having the height more than 170 is %d",hmaxcount);
    printf("\nThe number of person having the weight less than 50 is %d\n",wmincount);
    return 0;
}
