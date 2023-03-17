#include <stdio.h>
/**
* main - program that prints the alphabet in lowercase and uppercase
*
* Return: always 0
*/
int main(void)
{
char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 52; i++)
{
	putchar(alph[i]);
}
putchar('\n');
return (0);
}
