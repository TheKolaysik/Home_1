#include <stdio.h>
#include <locale.h>


void home_picture()
{
	puts("  _____");
	puts(" /     \\ ");
	puts("/       \\ ");
	puts("|   _   |");
	puts("|  | |  |");
	puts("|__| |__|");
}

void main()
{
	setlocale(LC_ALL, "RUS");
	home_picture();
}