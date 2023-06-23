#include <stdio.h>
#include <cs50.h>

int faktoriyel(int n);

int main()
{
    int sayi = get_int("Bir sayi girin: ");
    int sonuc = faktoriyel(sayi);
    printf("%d! = %d\n", sayi, sonuc);

    return 0;
}

int faktoriyel(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * faktoriyel(n - 1);
    }
}
