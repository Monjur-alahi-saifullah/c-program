#include<stdio.h>
int out(int B[],int t);
int main()
{
    int i,n,A[50];
    printf("enter n: ");
    scanf("%d",&n);
    printf("Enter array value :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);

    }
    out (A,n);

    return 0;
}
int out (int B[], int p)
{
    int  d;
    printf("Enter the index no to delate array");
    scanf("%d",&d);
    for(int j=0;j<p;j++)
    {
        if (j<d)
            printf("%d  ",B[j]);
        else if(j>=d)
            printf("%d  ",B[j+1]);

    }
    return ;

}
