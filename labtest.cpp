#include <stdio.h>
#define max 15
int a[max],b[max];


void marg( int low,int mid,int high)
{
    int l1,l2,i;
    for(l1=low,l2=mid+1,i=low; l1<=mid&&l2<=high;i++)
    {
        if (a[l1]<=a[l2])
            {b[i]=a[l1];
            l1++;}
            else
            {
                b[i]=a[l2];
                l2++;

            }
    }

    while (l1<=mid){
        b[i]=a[l1];
        i++;
        l1++;}
    while(l2<=high)
        b[i++]=a[l2++];
    for (i=low;i<=high;i++)
        a[i]=b[i];

}
void sort (int low,int high)
{
    int mid;
    if (low<high)
    {
        mid=(low+high)/2;
        sort(low,mid);
        sort(mid+1,high);
        marg(low,mid,high);
    }
    else
        return ;

}
int main()
{

    int n,i;
    printf("enter sixe;");
    scanf("%d",&n);

    printf("element");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);



    printf(" \n Array before sorting ");
    for(i=0;i<n;i++)
        printf("%d,  ",a[i]);

    sort(0,n-1);
    printf("\n\n sorted array :");

    for(i=0;i<n;i++)
        printf("%d,  ",a[i]);

}
