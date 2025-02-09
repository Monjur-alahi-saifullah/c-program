#include<stdio.h>
int main()
{
    int a[10],n,beg,end,mid;
    printf("enter the array size:");
    scanf("%d",&n);

    printf("Enter the array elemrnt :");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    printf("%  ",a[i]);

    int s;
    printf("Enter the search element: ");
    scanf("%d",&s);
    beg=0;
    end=n;

    do{
        mid=(beg+end)/2;
        if(a[mid]==s){
            printf("element in %d no index",mid);
            break; }
        else if (s>a[mid])
            beg=mid+1;
        else if (s<a[mid])
            end=mid-1;

    } while(beg<=end);
    if (beg>end)
        printf("element not found ");
}
