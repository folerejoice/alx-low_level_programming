#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'Print Alphabet in reverse'
 * Return: Always 0
 */
int main(void)
{       
	
        char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

        return (0);
}  
