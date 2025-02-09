#include<stdio.h>
void tow(int ,char ,char ,char);
int main()
{
   int n;
   printf("Enter the number of disk:  ");
   scanf("%d",&n);
   tow (n,'a','b','c');
}

void tower(int n,char beg,char aux,char end)
{
    if(n==1)
    {
        printf("Move disks #%4d from %6c to %6c",n,beg,end);
        return ;
    }
    tower(n-1,beg,end,aux);
    printf("\nMove disks #%4d from %6c to %6c\n",n,beg,end);
    tower(n-1,aux,beg,end);
}
