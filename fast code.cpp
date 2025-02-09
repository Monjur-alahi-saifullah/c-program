#include<stdio.h>
#include<math.h>

main()

{
    char answer;
    int a,b,c,d ;
    printf("would you like to know my name  ");
    printf("type y for yes and n for not ");
    answer = getchar();/* reading a charectir.*/
    if(answer =='y')
        printf(" my name is khan.\n");
    else
        printf("fuck you.\n");


printf(" ------\n");
printf("|guuuuu|\n");
printf("| kha  |\n");
printf(" ------\n");
printf("there was a man whose name was jone\n");
printf("a=");
scanf("%d",&a);
printf("\nB=");
    scanf("%d",&b);
    c= a+b;
    printf("\nvalue of sum =%d",&c);

    d= pow(a,2)+pow(b,2);
    printf("\nvalur of =%d",&d);
    return 0;

}
