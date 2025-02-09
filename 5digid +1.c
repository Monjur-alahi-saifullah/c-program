
#include<stdio.h>
int main()
{
    int a,b,c,n,d,e,f,sum ;
    printf("enter  value of N  ");
    scanf("%d",&n);
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n%10;
    n=n/10;
    e=n;
    printf("%d",c);
    sum=((e+1)*10000)+((d+1)*1000)+((c+1)*100)+((b+1)*10)+((a+1));


    printf("\n%d",sum);
    return 0;
}

