#include "cs50.h"
#include <stdio.h>

int main(void)
{
    int height=get_int("Rows: ");
    for(int i=1;i<=height;i++)
    {
        for(int j=0;j<height-i;j++)
        {
            printf(" ");
        }
        for (int k=0;k<i;k++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
