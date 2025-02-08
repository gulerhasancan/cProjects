#include "cs50.h"
#include <stdio.h>

bool luhncheck(long n);
void cardcheck (long n);

int main(void)
{
    long card_number;

    do
    {
        card_number = get_long("Card number: ");
    }
    while(card_number<0);

    if (luhncheck(card_number))
    {
        cardcheck(card_number);
    }
    else
    {
        printf("INVALID\n");
    }

}

bool luhncheck(long n)
{
    int digit_sum=0;
    bool double_digit = false;

    while (n>0)
    {
        int digit = n % 10;
        if(double_digit==true)
        {
            digit *= 2;
            if (digit > 9)
            {
                digit -= 9;
            }
        }
        n /= 10;

        digit_sum+=digit;
        double_digit = !double_digit;
    }
    return (digit_sum %10 == 0);
}

void cardcheck (long n)
{
    int length = 0;
    long prefix = n;

    while (prefix >99)
    {
        prefix /= 10;
    }

    long temp = n;
    while (temp>0)
    {
        temp /= 10;
        length++;
    }

    if ((prefix == 34 || prefix == 37) && length==15)
    {
        printf("AMEX\n");
    }
    else if ((prefix == 51 || prefix == 52 || prefix == 53 || prefix == 54 || prefix == 55) && length == 16)
    {
        printf("MASTERCARD\n");
    }
    else if (prefix / 10 == 4 && (length == 13 || length == 16))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
