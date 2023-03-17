#include <stdio.h>
/**
* main - program that prints the alphabet in lowercase except e & q
*
* Return: always 0
*/
int main(void)
{
int c;
for (c = 'a'; c <= 'z'; c++)
{
	if (c == 'e' || c == 'q')
	{
		continue;
	}
	putchar(c);
}
putchar('\n');
return (0);
}
