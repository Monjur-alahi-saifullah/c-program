#include<stdio.h>
int main()
{
    int a,b,c,n,d;
    printf("enter  value of N");
    scanf("%d",&n);
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n;
    d=a*100+b*10+c*1 ;
    printf("value %d",d);
    return 0;
}
