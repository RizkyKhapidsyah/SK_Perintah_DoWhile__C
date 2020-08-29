#include <stdio.h>
#include <conio.h>

int main()
{
	char ch;

	ch = 'A';

	do
	{
		putchar(ch);
		ch++;
	}
	while( ch != 'Z');

	putchar('\n');

	_getch();
	return(0);
}