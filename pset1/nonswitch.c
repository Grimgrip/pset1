#include <cs50.h>
#include <stdio.h>

int main (void)
{
    printf("Please give me an int between 1 and 10: ");
    int x = GetInt();
    
    if (x >= 0 && x <= 3)
    {
        printf("You picked a small int.\n");
    }
    else if (x >= 4 && x <= 7)
    {
        printf("You picked a medium int.\n");
    }
    else if (x >= 8 && x <= 10)
    {
        printf("You picked a large int.\n");
    }
    else
    {
        printf("You picked an invalid int.\n");
    }  
}
