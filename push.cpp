#include<stdio.h>
#define n 5
int stack[n],top=0,i;
int  push()
{
    if(top<n)
    {
        printf("enter data=\n");
        scanf("%d",&stack[top]);
        top++;
        printf("successful\n");
    }
    else
        printf("Sorry\n");



}

/*int pop()
{
    if(top==0)
        printf("sorry\n");
    else
    {
        top=top-1;
        printf("delet=%d",stack[top]);
    }
}*/
    void display()
    {
        for(i=top-1;i>=0;--i)

        printf("\n stack[%d]=%d\n",i,stack[i]);
}
int main()
{
    int stack[n],top=0,i;
    int p;
    do
{      printf("\n 0.Exit");
         printf("\n 1.push");
          printf("\n 2.display");
         ////printf("\n 3.pop");
          printf("\n Enter option=");
          scanf("%d",&p);
        switch(p)
        {
            case  1:
            push();
            break;

            case  2:
            display();
            break;
            default  :
                printf("wrong\n");

        }
        printf("\n next choice=\n");
} while (p!=0);
}

