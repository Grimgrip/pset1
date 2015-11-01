#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, spaces, hashes, totalRows;
    
    do
    {
    printf("Layers on your pyramid (max of 23): ");
    height = GetInt();
    
    if (height == 0)
    {exit(0);}
    }
    while (height < 1 || height > 23);
    
    for (totalRows = 1; totalRows <= height; totalRows++)
    {
        for(spaces = (height - totalRows); spaces > 0; spaces --)
        {printf(" ");}
        for(hashes = 1; hashes <= (totalRows + 1); hashes++)
        {printf("#");}
        printf("\n");
    }
}
