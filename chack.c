#include<stdio.h>
int main()
{
    int i,b,e,m,a[1000];
    int n=5;
    printf("element :: ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    b=0;
    e=n;
    for (i=0;i<n;i++)
        printf("%d,",a[i]);
    printf("\n");
    printf("enter the seeer: ");
    int s;
    scanf("%d",&s);
    do
    {
        m=(b+e)/2;
        if (a[m]==s)
            printf("the loc..%d",m);
        else if (a[m]<s)
            b=m+1;
        else if (a[m]>s)
            e=m-1;

    }while (b<=e);
if (b>e)
    printf("not found  ");


}
