#include <stdio.h>
#include <math.h>
int main()
{
    double num, result;

    printf("Enter Any Number: ");
    scanf("%lf", &num);

    result = pow(num,2);

    printf("Squer Root of %0.3lf = %0.3lf", num, result);

    return 0;
}
