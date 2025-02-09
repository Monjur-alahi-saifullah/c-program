#include<stdio.h>
int main()
{
 double bangla,english,math,physich,biology,aggregate,percentage ;
 printf("Enter the no");
 scanf("%lf%lf%lf%lf%lf",&bangla,&english,&math,&physich,&biology);
    aggregate=(bangla+english+math+physich+biology);
    percentage=aggregate*(1/100) ;
    //printf("aggregate=%lf\n",aggregate);
    printf("percentage=%lf",percentage);
    return 0;

}
