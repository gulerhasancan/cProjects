#include "cs50.h"
#include <stdio.h>
#include <string.h>

typedef struct
{
    string contacts;
    string numbers;
}
person;

int main(void)
{
    person people[3];

    people[0].contacts = "Hasan";
    people[0].numbers = "+90-555-073-9703";

    people[1].contacts = "Ozlem";
    people[1].numbers = "+90-555-444-3322";

    people[2].contacts = "Latife";
    people[2].numbers = "+90-543-210-5432";

    string name = get_string("Name: ");

    for(int i = 0;i<3;i++)
    {
        if(strcmp(people[i].contacts,name)==0)
        {
            printf("Found %s\n", people[i].numbers);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
