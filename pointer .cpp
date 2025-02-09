#include<stdio.h>
main()
{
    int a[50],i,s=50;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(int j=4;j>=0;j--)
    {

        printf("%d\t",a[j]);
    }
    return 0;
}
