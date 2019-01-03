#include <stdio.h>
#include <stdbool.h>

bool czytrojkat(unsigned int a, unsigned int b, unsigned int c)
{
	if((a+b>c) && (a+c>b) && (b+c>a))
		return true;
	else
		return false;
}
void main(void)
{
	unsigned int a, b, c;
	printf("Podaj dlugosc boku a: ");
	scanf("%u", &a);
	printf("Podaj dlugosc boku b: ");
	scanf("%u", &b);
	printf("Podaj dlugosc boku c: ");
	scanf("%u", &c);
	printf("\n");
	if (czytrojkat(a, b, c))
		printf("Mozna utworzyc trojkat\n");
	else
		printf("Nie uda sie utworzyc trojkata\n");
}