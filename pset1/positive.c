#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int x;
    
    do
    {
        printf("Please give me a positive int: ");
        x = GetInt();
    }
    while (x < 1);
    printf("Thanks for the positive int.\n");
    

}
