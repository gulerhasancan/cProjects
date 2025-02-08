#include "cs50.h"
#include <stdio.h>


int main(void)
{
    int seconds = 25300;
    int hours, minutes;
    hours = seconds/3600;
    minutes = (seconds - (hours*3600))/60;
    seconds = seconds - ((hours*3600) + (minutes*60));

    printf("%i hours %i minute(s) %i seconds.\n", hours,minutes,seconds);
}
