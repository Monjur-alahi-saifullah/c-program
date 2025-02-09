#include <stdio.h>
int main()
{
    char c;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    ((c=='a')||(c=='e')||(c=='i')||(c=='o')||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c == 'U')?printf("%c is a vowel"):printf("%c is a consonent.");

    return 0;
}
