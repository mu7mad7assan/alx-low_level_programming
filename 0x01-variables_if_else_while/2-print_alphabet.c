#include <stdio.h>
/**
* main - program that prints the alphabet in lowercase, followed by a new line
*
* Return: always 0
*/
int main(void)
{
char alph[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
	putchar(alph[i]);
}
putchar('\n');
return (0);
}
