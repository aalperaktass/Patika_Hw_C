#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("L�tfen kelimeyi giriniz: ");
    scanf("%[^\n]", str);

    printf("Tersine �evrilmi� kelime: ");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}