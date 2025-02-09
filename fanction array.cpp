#include<stdio.h>
int maximum(int B[], int p );
int minimum(int c[],int t);
int main()
{
    int i,n,A[50];
    printf("n==");
    scanf("%d",&n);
    printf("enter the mark");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);

    }
    maximum(A,n);
    minimum (A,n);

    return 0;
}
int maximum(int B[0], int p)
{
    int max =B[0];
    for(int j=0;j<p;j++)
    {
        if (max<B[j])
        {
            max=B[j];
        }
        //printf("max=%d",max);
    }
    printf("max=%d\n",max);
    return max;

}
int minimum(int c[],int t)
{
    int min =c[0];
    for (int i=0;i<t;i++)
    {
        if (min>c[i])
        {
            min=c[i];

        }
    }
    printf("min=%d",min);
    return 0;
}


