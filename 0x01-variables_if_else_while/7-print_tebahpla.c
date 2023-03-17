#include <stdio.h>
/**
* main - program that prints the alphabet in lowercase in reverse
*
* Return: always 0
*/
int main(void)
{
char alph[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 26; i < 0; i--)
{
	putchar(alph[i]);
}
putchar('\n');
return (0);
}
