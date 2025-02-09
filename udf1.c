#include <stdio.h>
#include <stdlib.h>
int sumNum(int x,int y); //function declaration
int main()
{
    int i,j,sum;
    printf("Please enter 2 numbers for find sum\n");
    scanf("%d %d",&i,&j);
    sum=sumNum(i,j); //function call
    printf("The result of sum is :%d",sum);
    getch();
    return 0;
}
int sumNum(int x, int y)//function definition
{
    int result;
result=x+y;
return result; //return statements
}
