#include <cs50.h>
#include <stdio.h>

int main(void)
{
printf("How long did you shower for (please round this number to the nearest minute)\n");
int i=get_int(); // This prompts the user to enter how long they showed for in the nearest minutes.

int m = i * 12; // This converts the number of minutes showered into number of water bottles

printf("Your shower has used up roughly %i bottles of water bottles\n",m); //This prints out the new variable, m, which is how many minutes were converted to water bottles.
}