#include<stdio.h>
#include<string.h>
main()
{
    char name[50],sir[50];
    gets(name);
    puts(name);
    gets(sir);
    puts(sir);


    printf("enter the name %s %s",name,sir );
    int i;
     i=strlen(name)-1;
     printf("\n%d",sir[1]);


    printf(" \n nn ==%d \n",i);
    strcpy(sir,name);
    //printf("\n copid %s",sir);
    puts(sir);
    return 0;
}
