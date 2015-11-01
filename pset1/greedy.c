#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    float input;
    int cInput;
    int coins = 0;
    
    int const qValue = 25;
    int const dValue = 10;
    int const nValue = 5;
    int const pValue = 1;

    do
    {
    printf("How much change is owed? ");
    input = GetFloat();
    if(input <= 0)
    {printf("Input may not be less than or equal to zero.\n");}
    }
    while (input <= 0);
    
    cInput = (int)round((input*100));
    
    coins += cInput / qValue;
    cInput %= qValue;
    
    coins += cInput / dValue;
    cInput %= dValue;
    
    coins += cInput / nValue;
    cInput %= nValue;
    
    coins += cInput / pValue;
    cInput %= pValue;
    
    printf("%i\n", coins);
    
}
