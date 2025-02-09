#include<stdio.h>
main()
{
    int q,w,e,r,t,sum,par ;
    scanf("%d%d%d%d%d",&q,&w,&e,&r,&t);
    sum=q+w+e+r+t;
    par=(sum/5)*100/500;
    if (par>=60)
        printf("first division");
    else if(par<=59||par>50)
    printf("SECOUND DIVISION");
    else if (par<=49||par>40)
        printf("third division");
    else
        printf("Fall");
    return 0;



}
