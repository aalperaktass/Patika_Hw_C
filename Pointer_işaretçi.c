#include <stdio.h>
#include <cs50.h>

int main()
{
    int a1 = 30;
    int a2 = 80;

    int *b1 = &a1;
    int *b2 = &a2;

    printf("sayi1 = %d\n", *b1);
    printf("sayi2 = %d\n", *b2);

    return 0;
}
