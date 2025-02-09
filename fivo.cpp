#include <stdio.h>
long int Fatorial(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, Fatorial(n));
    return 0;
}


long int Fatorial(int n) {
    if (n>=1)
        return n*Fatorial(n-1);
    else
        return 1;
}
