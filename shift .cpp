#include<stdio.h>
int fib(int a);
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        printf("%d \n",fib(i));
    }
    return 0;
}
int fib(int a)
{
    if(a<=2)

    return 1;
}


