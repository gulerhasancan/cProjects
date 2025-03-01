#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int owed_total;
    do
    {
        owed_total = get_int("Change owed: ");
    }
    while(owed_total<0);

    int quarter,dime,nickel,penny;
    quarter = 25;
    dime = 10;
    nickel = 5;
    penny = 1;

    int owed_quarter = owed_total / quarter;
    owed_total %= quarter;

    int owed_dime = owed_total/ dime;
    owed_total %= dime;

    int owed_nickel = owed_total / nickel;
    owed_total%=nickel;

    int owed_penny = owed_total / penny;
    owed_total%=penny;
    
    printf("You owe %i quarters, %i dimes, %i nickels, %i pennies.\n",owed_quarter, owed_dime, owed_nickel, owed_penny);
}