#include "cs50.h"
#include <stdio.h>

int main(void)
{
    int n=get_int("Number of elements: ");

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        numbers[i] = get_int("Enter number %i: ", i+1);
    }

    int sum=0;

    for(int j=0; j<n;j++)
    {
        sum+= numbers[j];
    }
    printf("Sum of numbers: %i\n", sum);
    return 0;
}
