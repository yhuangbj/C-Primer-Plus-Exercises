/* Programming Exercise 2-3 */
#include <stdio.h>
int main(void)
{
    int ageyears; /* age in years */
    int agedays; /* age in days */

    /* large ages may require the long type */
    ageyears = 101;
    agedays = 365 * ageyears;
    printf("An age of %d years is %d days.\n", ageyears, agedays);

    return 0;
}

