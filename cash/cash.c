#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars;
    do
    {
        dollars = get_float("Change owed: "); //asks user for change owed
    } 
    while (dollars < 0);

    int cents = round(dollars * 100); //extra math operator i looked up, needed to include the math.h
    int coins = 0;
    
    int denominations[] = {25, 10, 5, 1}; //allows for easier layout instead of typing out each individual function
    int size = 4;
    for (int i = 0; i < size; i++)
    {
        coins += cents / denominations[i];
        cents %= denominations[i];
        
    }
    printf("%i\n", coins);
    
    
    
    
    
}