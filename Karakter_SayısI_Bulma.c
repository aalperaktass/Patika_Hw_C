#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main() {
    char input[100];
    printf("Bir kelime veya cumle girin: ");
    fgets(input, sizeof(input), stdin);

    int uzunluk = strlen(input) - 1;

    printf("Girdiginiz kelime veya cumle %d karakterden olusuyor.\n", uzunluk);

    return 0;
}
