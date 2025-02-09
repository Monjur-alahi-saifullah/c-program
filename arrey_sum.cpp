#include<stdio.h>
main()
{
    int A[20],n,i,sum=0;
    printf("     Enter the array Number ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("     input the A[%d] value  ",i);
        scanf("%d",& A[i]);
        sum=sum+A[i];
    }
     printf("\n      sum of all array element= %d\n\n",sum);
    return 0;
}
