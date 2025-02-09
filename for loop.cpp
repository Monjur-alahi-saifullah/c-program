#include<stdio.h>
main()
{
    int i=1,j;
    while (i<=10)
    {
        for(j=1;j<=i;j++)
            printf("%d",j);
            printf("\n");
            i+=2;
    }
        //printf("%d",j);
    return 0;
}
