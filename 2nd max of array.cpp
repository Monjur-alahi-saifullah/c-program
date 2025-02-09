#include<stdio.h>
main()
{
    int n,A[50],i,max=0,min=0;
    scanf("%d",&n);
    printf("input array value ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);

    }
    {
        for (i=0;i<n;i++)
        {
            if(max>A[i++])
            {
                 max =A[i];
            }

        }
        printf("max %d\n",max);
    }
   {
       for (int i=0;i<n;i++)
    {
        if ((A[i]<max)&&(A[i]>A[i++]))
             min=A[i];
    }
    printf("2nd max = %d",min);
   }

    return 0;

}
