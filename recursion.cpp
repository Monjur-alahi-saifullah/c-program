#include<stdio.h>
int rec(int x)
{
    int f;
    if (x<1)
        return 1;
    else
    {

        f=x*rec(x-1);
        printf("%d\n",f);
       return (f);
    }
}
main()
{
    int a,fact;
    printf("Enter the number ");
    scanf("%d",&a);
    fact=rec(a);
    printf("Factorial of %d = %d ",a,fact);
    return 0;

}

