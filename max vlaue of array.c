//find the largest value of array
#include<stdio.h>
main()
{
    int a[50],n,i,maxi=0;
    printf("n=  ");
    scanf("%d",&n);
    printf("array value ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(maxi<a[i])
        {
              maxi=a[i];
           // printf("%d\n ",maxi);
        }

    }

printf(" %d",maxi);
    return 0;
}


