#include<stdio.h>
main()
{
    int a[50],n,i,s=10;
    printf("enter n  ");
    scanf("%d",&n);
    //printf("a");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if (a[i]==s)
        {
            printf(" found ");
            printf("index no a[%d] position %d",i,i+1);
            break ;

        }
        if (i==n)
            printf("not found ");
    }
    return 0;
}
