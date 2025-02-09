#include<stdio.h>
int main()
{
    int n,i,a[100],s,v;
    printf(" Enter the size: ");
    scanf("%d",&n);
    printf(" Enter the element :  ");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the insertion position ");
    scanf("%d",&s);
    for (int j=n+1;j>s-1;--j){
        a[j+1]=a[j];
    }
    printf("Enter the insirtion value ");
    scanf("%d",&v);
    a[s]=v;
    n++;
    for (i=0;i<n;i++)
        printf("%d,",a[i]);

}
