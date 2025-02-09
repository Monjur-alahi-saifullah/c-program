#include<stdio.h>
main()
{
    int row,coll,A[50][50],i,j,B[50][50],C[50][50],row2,coll2;
    printf("enter row & collam ");
    scanf("%d%d",&row,&coll);
    printf("2nd row & coll");
    printf("enter value ");

    for ( i=0;i<row;i++)
    {
        for( j=0;j<coll;j++)
            scanf("%d",&A[i][j]);
    }

     for ( i=0;i<row;i++)
    {
        for( j=0;j<coll;j++)
        {

            printf("%d  ",A[i][j]);
        }
        printf("\n");
    }


 for ( i=0;i<row2;i++)
    {
        for( j=0;j<coll2;j++)
            scanf("%d",&B[i][j]);
    }

     for ( i=0;i<row2;i++)
    {
        for( j=0;j<coll2;j++)
        {

            printf("%d  ",B[i][j]);
        }
        printf("\n");
    }
     for ( i=0;i<row2;i++)
    {
        for( j=0;j<coll2;j++)
        {
           C[i][j]=A[i][j]+ B[i][j];
            printf("%d  ",C[i][j]);
        }
        printf("\n");
    }



    return 0;
}



