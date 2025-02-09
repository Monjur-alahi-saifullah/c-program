// Online C compiler to run C program online
#include <stdio.h>
main()
{
int a,c,b;
scanf("%d%d",&a,&b);
c=a&&b;
b=a||b||c;
a=a&&b||c;
printf("%d\n%d%d",a,b,c);


    return 0;
}
