#include<stdio.h>
main()
{
    int row,coll,A[50][50];
    printf("enter row & collam ");
    scanf("%d%d",&row,&coll);
    printf("enter value ");

    for (int i=0;i<row;i++)
    {
        for(int j=0;j<coll;j++)
            scanf("%d",&A[i][j]);
    }

     for (int i=0;i<row;i++)
    {
        for(int j=0;j<coll;j++)
        {

            printf("%d  ",A[i][j]);
        }


        printf("\n");
    }




    return 0;
}
