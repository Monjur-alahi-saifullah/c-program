#include <stdio.h>
# define size 100
 void  eq();
 void dq();
 void sh();
 int arr[size];
 int f=-1;
 int r=-1;
 main()
 {
     int i,ch;
     while (1)
    {
        printf("1.Enqueue Operation\n");
        printf("2.Dequeue Operation\n");
        printf("3.Display the Queue\n");
        printf("4.Exit\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            eq();
            break;
            case 2:
            dq();
            break;
            case 3:
            sh();
            break;
            case 4:
            exit(1);
            default:
            printf("Incorrect choice \n");
        }
    }


 }


  void   eq()
  {

      if (r < size-1)
      {
           if (f==-1)
            f=0;
          printf("Enter tha value in a queue:  ");
          scanf ("%d",&arr[r]);
          r++;

      }
      else
        printf("Overflowed ");

    }

  void dq()
  {
      if (f>-1 || f<=r)
          {
              printf(" Element deleted from the queue %d \n", arr[f]);
              f++;

          }
          else
          {
              printf("Underflow  ");
            return ;

          }
}
void sh()
{
    int i;
    if (f==-1)
        printf("Empty queue ");
    else
    {

        printf("the queue is :");
        for (i=f;i<=r;i++)
        {
            printf("%d ,",arr[i]);

        }

    }

}
