#include<stdio.h>
main()
{
    int A[20],i,n,even=0,odd=0,zero=0;
    printf("    Enter the value of n  ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("  Enter the value of A[%d] element ",i);
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
      if (A[i]%2==0)
    {
        even=even+1;
    }
    else if (A[i]%2!=0)
    {
        odd=odd+1;
    }
    else
    {
        zero=zero+1;
    }
    }
    printf("   even element= %d\n odd element =%d\nzero= \n",even,odd,zero);


    return 0;

}

