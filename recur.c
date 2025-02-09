#include<stdio.h>
int sum(int );
int rum(int );
int main()
{
    int s,r,n;
    printf("\tnumbrt::");
    scanf("%d",&n);
    s=sum(n);
    printf("\t sum ==%d",s);
    r=rum(n);
    printf("\t rum==%d",r);
    return 0;

}
int sum(int num)
{
    int sum=0,ret;

    while(num>10)
    {
        printf("well");
        //ret=num%10;
        //sum=sum+ret;
    }
    return
}
int rum(int num)
{
    int sum=0,ret;
    if (num!=0)
    {
        ret=num%10;
        sum=ret+rum(num/10);

    }
    return sum;
}
