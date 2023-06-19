#include <stdio.h>
#include <cs50.h>
#include <string.h>

bool IsPalindrome(const char* word)
{
    int length = strlen(word);
    int i, j;

    // Karakter dizisinin başından ve sonundan ilerleyerek karşılaştırma yapma
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        if (word[i] != word[j])
        {
            return false;
        }
    }

    return true;
}

int main(void)
{
    string word = get_string("Kelimeyi girin: ");

    if (IsPalindrome(word))
    {
        printf("Girilen kelime bir palindromdur.\n");
    }
    else
    {
        printf("Girilen kelime bir palindrom değildir.\n");
    }

    return 0;
}
