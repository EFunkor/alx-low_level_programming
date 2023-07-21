#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Assigns a random number to n, and then declares
 *
 * Description: Assigns a random number to n,
 * And then declares if it is postive, 0 or negative.
 *
 * Return: 0 for no error once done
 */
void positive_or_negative(int i)
{
        /*int n;*/

        srand(time(0));
        i = rand() - RAND_MAX / 2;
        /* your code goes there */
        if (i > 0)
        {
                printf("%d is positive\n", i);
        }
        else if (i == 0)
        {
                printf("%d is zero\n", i);
        }
        else
        {
                printf("%d is negative\n", i);
        }

        /*return (0);*/
}
