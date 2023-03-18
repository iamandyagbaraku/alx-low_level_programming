#include <stdio.h>

/**
 *main -  prints all possible different combinations of three digits.
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
    int ones;
    int tens;
    int hundreds;

    for(hundreds = '0'; hundreds <= '9'; hundreds++) /*increment hundreds*/
    {
        for (tens = (hundreds + 1 ); tens <= '9'; tens++) /*increment tens*/
        {
            for (ones = (tens + 1); ones <= '9'; ones++) /*one's ten+1*/
            {
                putchar(hundreds);
                putchar(tens);
                putchar(ones);

                if (hundreds != '7' || tens != '8' || ones != '9') /*print commas*/
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    putchar('\n');

    return (0);
}
