#include <stdio.h>
#include <cs50.h>

int main()
{
    

    printf("Ondalık  sayı girin: ");
    float sayi = get_float("");

    printf("Sayının hexadecimal hali: %a\n", sayi);

    return 0;
}
