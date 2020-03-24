/* Programming Exercise 2-7 */
#include <stdio.h>
void smile(void);

int main(void)
{
    smile();smile();smile();printf("\n\n");
    smile();smile();printf("\n\n");
    smile();

    return 0;
}

void smile(void)
{
    printf("Smile!");
}

