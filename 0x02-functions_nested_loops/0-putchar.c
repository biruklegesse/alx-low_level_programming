#include "main.h"
/**
 * main - entry block
 * Return: Always 0 (Success)
 **/

int main(void)
{
	
	char biruk[] = "_putchar";
	
	int c;
	
	for (c=0; c < 8; c++)
	{
		_putchar(biruk[c]);
	}
	_putchar('\n');
	return (0);
}
