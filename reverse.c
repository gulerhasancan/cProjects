#include "cs50.h"
#include <string.h>
#include <stdio.h>

int main()
{
    string word=get_string("Type the word you want reversed: ");

    int length = strlen(word);

    printf("Input: %s\n", word);

    printf("Output: ");

    for(int i=length-1; i>=0; i--)
    {
        printf("%c", word[i]);
    }
    printf("\n");
}
