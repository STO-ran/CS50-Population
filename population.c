#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for start size
    int start;
    do
    {
        start = get_int("Enter the initial population size: ");
    }
    while (start < 9);

    // Prompt for end size
    int end;
    do
    {
        end = get_int("Enter the final population size: ");
    }
    while (end < 9);

    // Calculate number of years until we reach threshold
    int years=0;
    while (end > start)
    {

        start = (start + (start / 3) - (start / 4));
        years++;

    }

    // TODO: Print number of years
    printf("The initial population size is: %i\n", start);
    printf("The final population size is: %i\n", end);
    printf("The number of years to attain the final population size is: %i\n", years);
}
