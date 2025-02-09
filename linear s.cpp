#include<stdio.h>
main()
{
    int n ,a[50],f;
    printf("Enter the array size: ");
    scanf("%d",&n);
    printf("Enter the array element: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);}
    printf("array is: ");
    for(int i=0;i<n;i++)
        {printf("%d  ",a[i]);
        }

    printf("\nEnter the finding element ");
    scanf("%d",&f);
    for(int i=0;i<n;i++){
        if (a[i]==f){
        printf("found in %d no  index ",i+1);
        break;}
        else
            printf("not found ");

    }
}
