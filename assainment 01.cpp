#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter tha number :");
    scanf("%d",&a);
    b=a%5 ;
    c=a%11 ;
    (b==0)&&(c==0)?(printf("divisable")): (printf("not divisable"));

    return 0;

}
