#include <cs50.h>
#include <stdio.h>

int main (void)
{
    printf("Please give me an int: ");
    int x = GetInt();
    
    if (x > 0)
    {
        printf("You picked a positive int.\n");
    }
    else if (x == 0)
    {
        printf("You picked 0.\n");
    }
    else
    {
        printf("You picked a negative int.\n");
    }
}
