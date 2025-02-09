#include<stdio.h>
main()
{
    long long int rem,num,count=0;
    scanf("%lld",&num);
    while(num!=0)
    {
        count++;
        num = num / 10;

    }
    printf("%lld",count);
    return 0;
}
