#include "cs50.h"
#include <stdio.h>

typedef struct
{
    string name;
    int votes;
}
candidates;

int main(void)
{
    const int num_candidates = 3;
    candidates person[num_candidates];

    person[0].name = "Joe Biden";
    person[0].votes = 5;

    person[1].name = "Donald Trump";
    person[1].votes = 15;

    person[2].name = "Kamala Harris";
    person[2].votes = 7;

    int highest_vote = 0;
    for(int i=0; i < num_candidates; i++)
    {
        if(person[i].votes>highest_vote)
        {
            highest_vote = person[i].votes;
        }
    }

    for(int i=0; i< num_candidates;i++)
    {
        if(person[i].votes==highest_vote)
        {
            printf("%s with a vote count of %i.\n", person[i].name, highest_vote);
        }
    }
}
