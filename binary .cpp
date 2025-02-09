#include<stdio.h>
int main()
{
    int a[50],n,i,j,k,s;
    printf("enter the size of array:  ");
    scanf("%d",&n);

    printf("Enter the array element: \n");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);

    for (i=0;i<n;i++)
        printf("%d",a[i]);


        printf("\n Enter the searching element ");
        scanf("%d",&s);
        int beg=0;
        int end=n;
        int mid;
    do
    {
                mid =int(beg + end) / 2;

        if(a[mid] == s)
            {
            printf("The searching element is in index %d\n",mid);
            break;
            }
        else if (a[mid] < s)
            {
            beg = mid + 1;
            }
        else if(a[mid] > s)
            {
            end = mid -1;
        }
    } while (beg<=end);
if (beg>end)
    printf("element not found ");
}
