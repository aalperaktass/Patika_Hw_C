#include <stdio.h>
#include <cs50.h>


int main()
{
    int i, n;
    int numbers[100];
    int max;

    printf("Dizi boyutunu girin: ");
    scanf("%d", &n);

    printf("Dizinin elemanlarını girin:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    max = numbers[0];

    for (i = 1; i < n; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    printf("En büyük sayı: %d\n", max);

    return 0;
}
