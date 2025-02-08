#include "cs50.h"
#include <stdio.h>

float average(int length,int array[]);

const int N = 3;


int main(void)
{
    int scores[N];
    for(int i=0;i<N;i++)
    {
        scores[i]=get_int("Exam Result: ");
    }

    printf("Average: %.2f\n", average(N,scores));

}

float average(int length,int array[])
{
    int sum = 0;
    for(int i=0;i<length;i++)
    {
        sum+=array[i];
    }
    return sum/(float)length;
}
