#include<stdio.h>
main()
{
    int a[50],n,i,maxi;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<a[i+1])
            maxi=a[i+1];
        printf("%d",maxi);
    }


    return 0;
}

