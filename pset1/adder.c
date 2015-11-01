#include <cs50.h>
#include <stdio.h>

int main (void)
{
    printf("Grant me an int: ");
    int x = GetInt();
    printf("Grant me another int: ");
    int y = GetInt();
    printf("The sum of %d and %d is %d.\n", x, y, x+y);
}
