#include<stdio.h>
main()
{
    int length,breadth ,r,p;
    printf("entre length and breadth ");
    scanf("%d %d",&length,&breadth);
    r=length*breadth;
    p=2*length+2*breadth;
    printf("area%d and perameter=%d",r,p);
    return 0;
}
