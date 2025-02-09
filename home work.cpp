#include<stdio.h>
main()
{
    int p,r,t;
    float c;
    printf("enter thr value");
    scanf("%d%d%d",&p,&r,&t);
    c=p*t*r/100;
    printf("compound interest%.3f",c);
    return 0;
}
