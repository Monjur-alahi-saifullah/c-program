#include <stdio.h>
int fibb (int );
int main ()
{
    int n,i=0,c;
    printf("Enter the number:: ");
    scanf("%d",&n);

    printf("\n  Fibonacci series: ");
    for (c=0; c<=n; c++)
    {
        printf("%d,",fibb(i));
        i++;
    }
    return 0;

}int fibb(int n)
{
    if (n==0 || n==1)
        return 1;
    else
        return (fibb(n-1)+fibb(n-2));

}
