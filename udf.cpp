#include<stdio.h>
int swap(int p,int q,int tem);
int main()
{
    int x=2,y=3,a;
    printf("x=%d & y=%d",x,y);
    swap(y,x,a);
    printf("after swipe x =%d &  y=%d",x,y);
    return 0;
}
int swap(int p,int q,int tem)
{
   // int p,tem,q;
    tem=p;
    p=q;
    q=tem;

 return 0;
}
