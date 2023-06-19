#include <stdio.h>
#include <cs50.h>

void SortIntArr(int arr[], int size)
{
    // Sıralama algoritması: Kabarcık sıralaması (Bubble Sort)
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Elemanları yer değiştir
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    int size = get_int("Dizi boyutunu girin: ");
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = get_int("Dizinin %d. elemanını girin: ", i + 1);
    }

    SortIntArr(arr, size);

    printf("Sıralanmış dizi: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
