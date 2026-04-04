#include <stdio.h>

int main()
{
    char st[30];
    gets(st); // The entered string is stored in st! // should use fgets as it is more safe

    printf("%s", st);
    // puts(st);
    printf("\nhey");

    return 0;
}