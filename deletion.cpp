
#include<stdio.h>
#include<conio.h>

int main()
 {
   int i,a[10],n,k;

   printf("enter how many element: ");
   scanf("%d",&n);

   printf("enter the element:\n");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);

   printf("enter delete position:");
   scanf("%d",&k);

   {
   for(i=k;i<=n;i++)
   a[i]=a[i+1];
   n--;
   }
   printf("Array elements after deletion:\n");
   for(i=0;i<n;i++)
   printf(" %d",a[i]);
 }
