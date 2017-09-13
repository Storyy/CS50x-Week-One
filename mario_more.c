#include <stdio.h>
#include <cs50.h>

int print_pryamid(void);

int main(void)
{
    int n; //this prompts the user to keep entering a height, until a valid one is entered. I use int n; to specify that n is an integer below.
    do
    {
        printf("height: ");
        n = get_int();
    }
    while(n > 23 || n < 0);

// Pryamid print code starts here

for (int x = 0; x < n; x++)  // nested loop. x is a local variable that works only for the code inside the brackets. This helps increment the size of the spaces and pryamid. This will the code below n times.
{
    for (int i=0; i < n - x - 1;i++) // prints out the space
   {
    printf(" ");
   }

    for(int m=0; m < x + 1; m++) // prints out the #; note I removed \n(which adds a new line) for a purpose here; that is to make the pryamids print according to specs rather than a new # each line.
    {
    printf("#");
    }

    printf("  "); // This is to print out the 2 spaces between the pryamid

    for(int m=0; m < x + 1; m++) // prints out the #; note I removed \n(which adds a new line) for a purpose here; that is to make the pryamids print according to specs rather than a new # each line.
    {
    printf("#");
    }

    printf("\n"); // starts a new line
}
}