#include<stdio.h>
main()
{
    int i,a[20],b[30],c[55],n,j;
    printf("enter n");

    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf("Enter the a[%d]",i);
        scanf("%d",&a[i]);
    }


    for(int i=0;i<n;i++)
    {
        printf("\nEnter the b[%d]",i);
         scanf("%d",&b[i]);
    }

    for(int i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
        printf("\n %d",c[i]);
    }


    return 0;
}
