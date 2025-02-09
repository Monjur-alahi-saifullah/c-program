
#include<stdio.h>
main()
{
    int A[50],n,i,f;
    printf("enter nomber :");
    scanf("%d",&n);
    printf("Enter the array value ");
    for (i=0;i<n;i++)
    {
        printf("input A[%d] value ",i);
        scanf("%d",&A[i]);
    }
    printf("Enter tha finding value ");
    scanf("%d",&f);

    for(i=0;i<n;i++)
    {
        if (A[i]==f)
        {
            printf("\n index  A[%d] & position==%d",i,i+1);
        }

    }
    return 0;


}
