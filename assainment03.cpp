#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter tha baying prise :");
    scanf("%d",&a);
    printf("Enter the selling prise :");
    scanf("%d",&b);
     c=b-a;
     printf("%d",c);
    (c>0)? printf("  profit  "):printf("  loss  ");
    (c|=0)?printf(" \nprofit \v loss"):printf("\n no");
    return 0;

}
