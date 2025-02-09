#include<stdio.h>
#include<conio.h>
int  main()
{
int i,n,a[100];
printf("ENTER HOW MANY NUMBER:");
scanf("%d",&n);


printf("Enter Values:\n");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);


printf("Elements after Traversal:\n");
for(i=1;i<=n;i++)
printf("a[%d]=%d\n",i,a[i]);



}

