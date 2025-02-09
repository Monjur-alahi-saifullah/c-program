#include<stdio.h>

main()
{
    int i=5;
    printf("%d",&i);
    int j=&i;
    printf("%d",*j);
    return 0;
}
