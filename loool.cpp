#include<stdio.h>
main()
{
    int n,A[50],i,maxi =0,min=0;
    printf("n==  ");
    scanf("%d",&n);
    printf("input array value ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);

    }
    for (i=0;i<n;i++)
        {
            if(maxi >A[i])
            {
                maxi = A[i];
            }

        }
        printf("max %d",maxi );

    return 0;
}
