
#include <stdio.h>
void tower(int ,char,char,char);
void main()
{
    int disks;
    printf("How many disks=");
    scanf("%d",&disks);
    tower(disks,'A','B','C');
}
void tower(int n,char beg,char aux,char end)
{
    if(n==1)
    {
        printf("Move disks %6d from %6c to %6c",n,beg,end);
        return ;
    }
    tower(n-1,beg,end,aux);
    printf("\nMove disks %6d from %63c to %6c\n",n,beg,end);
    tower(n-1,aux,beg,end);
}
