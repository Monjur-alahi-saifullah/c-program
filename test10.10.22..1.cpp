 #include<stdio.h>
 #include<string.h>
int main()
{
    char a[50];
    printf("enter the srting  ");
    gets(a);
    int n=strlen(a);
    printf("%d",n);
    if (n%2==1)
    {
        printf("parendom");

    }
    else
        printf("\n not perendom");


    return 0;
}
