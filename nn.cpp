
#include<stdio.h>
main()
{
    int a[20],n,i,x,d,ii;
    printf("Enter the array size: ");
    scanf("%d",&n);
    printf("enter the data ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the deleting position: ");
    scanf("%d",&d);
    ii=d-1;
    for (i=ii;i<n-1;i++ ){
        a[i]=a[i+1];
        //printf("%d",i);
    }
    printf("the array is : ");
    for (x=0;x<n-1;x++)
        printf("%d,",a[x]);



    }
