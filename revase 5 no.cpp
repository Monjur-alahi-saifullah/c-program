
#include<stdio.h>
int main()
{
    int a,b,c,n,d,e,f;
    printf("enter  value of N  ");
    scanf("%d",&n);
    a=n%10+1;
    n=n/10;
    b=n%10+1;
    n=n/10;
    c=n%10+1;
    n=n/10;
    d=n%10+1;
    n=n/10;
    e=n+1;


    printf("%d%d%d%d%d",e,d,c,b,a);
    return 0;
}
