#include<stdio.h>
int main()
{
    double selling_prige,bying_prige,x,y;
    printf("enter the bying prige of 25 prodact %lf ",bying_prige);
    scanf("%lf",&bying_prige);
    printf("enter the selling prige 25 prodact %lf ",selling_prige);
    scanf("%lf",&selling_prige);
    x=bying_prige/25;
    y=selling_prige/25;
    printf("bying prise and selling prise of each prodact %.3lf\n%.3lf",x,y);
    return 0;
}
