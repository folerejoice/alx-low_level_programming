#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print Alphabet in reverse'
 * Return: Always 0
 */
int main(void)
{       
        int n = 122;

	while(n >= 99)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
        return (0);
}  
