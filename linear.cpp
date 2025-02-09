#include<stdio.h>
int main()
{
    int a[50],n,i,j,k;
    printf("enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the array element: \n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i=0;i<n;i++)
        printf("%d",a[i]);
    printf("\n Enter the searching element: ");
    scanf("%d",&k);
    for (j=0;j<=n;j++)
    {
        if (a[j]==k){
            printf("the value found in indrx:   %d",j);
            break;
        }
         else if (j==n)
                printf("the value does not exist \n");
    }
}
