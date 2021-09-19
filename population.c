#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for start size
    int n;
    do
    {
        n = get_int("Enter the initial population size: ");
    }
    while (n < 9);

    // Prompt for end size
    int e;
    do
    {
        e = get_int("Enter the final population size: ");
    }
    while (e < 9);

    // Calculate number of years until we reach threshold
    int t = e % (n + (n / 3) - (n / 4));

    // TODO: Print number of years
    printf("The initial population size is: %i\n", n);
    printf("The final population size is: %i\n", e);
    printf("The number of years to attain the final population size is: %i\n", t);
}
