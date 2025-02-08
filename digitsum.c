#include "cs50.h"
#include <stdio.h>

int sum_digits(int n);

int main(void)
{
    int n = get_int("Enter a non-negative integer: ");

    int i=sum_digits(n);
    printf("Sum of digits: %i\n", i);
}

int sum_digits(int n)
{
    int sum=0;

    if(n<0)
    {
        printf("You entered a number smaller than 0");
        return 1;
    }

    while (n>0)
    {
        sum += n % 10;
        n /=10;
    }
    return sum;
}
