#include<stdio.h>
main()
{
    int A[20],n,i,sum=0;
    printf("          Enter the number of arrays  n=  \n\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("    Enter the A[%d] value of array  ",i);
       scanf("%d",&A[i]);
    }
     for(i=0;i<n;i++)
    {
        if (A[i]<0)
             printf("\n     Negative element  =%d",A[i]);
    }

    return 0;
}
