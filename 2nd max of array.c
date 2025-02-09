#include<stdio.h>
main()
{
    int n,A[50],i,max=0,min=0;
    printf("input n");
    scanf("%d",&n);
    printf("input array value ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);

    }
    {
        for (i=0;i<n;i++)
        {
            if(A[i]>A[i++])
            {
                 max =A[i];
            }

        }
        printf("max %d",max);
    }
   {
       for (int i=0;i<n;i++)
    {
        if ((A[i]<max)&&(A[i]>A[i++]))
             min=A[i];
    }
    printf("min = %d",min);
   }

    return 0;

}
