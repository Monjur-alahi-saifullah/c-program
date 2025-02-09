#include<stdio.h>
int input (int inp[],int x)
    {

        for(int i=0;i<x;i++)
        {
            scanf("%d",&inp[i]);
        }

    }
int outp(int oup[],int g)
{
   int i=0,maxi=0;
        for(i=0;i<g;i++)
        {
            if (maxi>oup[i+1])
            {
                maxi=oup[i];
              //printf("%d",maxi);
            }
        }
        printf("max==  %d\n",maxi);

        int mini;
    for(i=0;i<g;i++)
    {
        if(oup[i]<oup[i+1]);
        {
            mini=oup[i];
           // printf("%d",A[i]);
        }

    }
    printf("min==%d",mini);
return 0;
}
int main()
{
    int A[50],n;
    printf("enter n  ");
    scanf("%d",&n);

    int m= input(A,n);
    outp(A,n);

    return 0;
}


