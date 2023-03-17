#include <stdio.h>
/**
* main - program that prints the alphabet in lowercase in reverse
*
* Return: always 0
*/
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
