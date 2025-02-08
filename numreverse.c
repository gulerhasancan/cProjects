#include "cs50.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    int size=get_int("Number of elements: ");
    int numbers[size];

    for (int i = 0; i < size; i++)
    {
        numbers[i] = get_int("Enter a number: ");

    }
    printf("Reversed: ");

    for(int i=size-1;i>=0;i--)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
}
