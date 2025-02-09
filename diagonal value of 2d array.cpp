#include<stdio.h>
main()
{
    int row,coll,A[50][50],i,j;
    printf("enter row & collam ");
    scanf("%d%d",&row,&coll);
    printf("enter value ");

    for (i=0;i<row;i++)
    {
        for( j=0;j<coll;j++)
            scanf("%d",&A[i][j]);
    }

     for (i=0;i<row;i++)
    {
        for( j=0;j<coll;j++)
        {

            printf("%d  ",A[i][j]);
        }


        printf("\n");
    }
    printf("     diagonal value \n");
    for ( i=0;i<row;i++)
    {
        for( j=0;j<coll;j++)
        {
            if (i==j)
            printf("%d  ",A[i][j]);
            else
                printf("  ");
        }


        printf("\n");
    }





    return 0;
}

