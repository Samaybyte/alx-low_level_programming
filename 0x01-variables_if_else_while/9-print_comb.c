#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digits base 10 
 * followed by a comma, space and new line 
 * Return: 0
 */
int main(void)
{
        int n =0;

        while (n < 10)
        {
                putchar(48+n);
                if (c != 9)
                {
                    putchar(',');
                    putchar(' ');
                }
                n++;
        }

        putchar('\n');
        return (0);
}

