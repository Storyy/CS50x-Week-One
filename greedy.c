#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int coins_used = 0; // This is used to keep track of how many coins are needed to dispense change

    printf("O hai! How much change is owed? ");
    float change = get_float();

    while(change < 0) // This is to prompt the user to give a valid change
    {
        printf("How much change is owed? ");
        change = get_float();
    }

        int Dollar = (change * 1000)/10; // This is to convert the float into an int. We want to use 1000/10 instead of *100 to correctly round the float to the 1000th place.


        while(Dollar >= 25) // This will keep subtracting the amount by 25cents and it'll increment our variable coins_used by 1 for each time this is done
        {
            Dollar = Dollar - 25;
            coins_used++; // This increments the variable; to keep track of the number of coins used.
        }

        while(Dollar >= 10 && Dollar < 25) // Same as above for 10c
        {
            Dollar = Dollar - 10;
            coins_used++;
        }
        while(Dollar >= 5 && Dollar < 10) // Same as above for 5c
        {
            Dollar = Dollar - 5;
            coins_used++;
        }
        while(Dollar >=1 && Dollar < 5) // Same as above for 1c
        {
            Dollar = Dollar - 1;
            coins_used++;
        }

    printf("%i\n",coins_used); // This will print out how many coins are needed since this will only work when the change does not fall under any of the aforementioned categories.
}