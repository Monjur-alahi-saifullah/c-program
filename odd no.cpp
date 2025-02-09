#include<stdio.h>
main()
{
    int A[20],i,n,even=0,odd=0;
    printf("Enter the value of n  ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the value of A[%d] element ",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
      if (i%2==0)
    {
        even=even+1;
    }
    else
    {
        odd=odd+1;
    }
    }
    printf(" even element =%d odd element =%d",even,odd);


    return 0;

}
