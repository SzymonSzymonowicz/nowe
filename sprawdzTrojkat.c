#include <stdio.h>
#include <stdbool.h>

bool czytrojkat(unsigned int a, unsigned int b, unsigned int c)
{
	if((a+b>c) && (a+c>b) && (b+c>a))
		return true;
	else
		return false;
}

bool prostokatny(unsigned int a, unsigned int b, unsigned int c)
{
	if((a*a+b*b==c*c) || (a*a+c*c==b*b) || (b*b+c*c==a*a))
		return true;
	else
		return false;
}

bool rownoboczny(unsigned int a, unsigned int b, unsigned int c)
{
	if((a==b)==(c==b))
		return true;
	else
		return false;
}

bool rownoramienny(unsigned int a, unsigned int b, unsigned int c)
{
	if((a==b) || (a==c) || (b==c))
		return true;
	else
		return false;
}
void main (void)
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
	{
		if(prostokatny(a, b, c))
			printf("Trojkat jest prostokatny \n");
		if(rownoboczny(a, b, c))
			printf("Trojkat jest rownoboczny \n");
		else 
		{		
			if(rownoramienny(a, b, c))
				printf("Trojkat jest rownoramienny \n");
			else
				printf("Trojkat jest roznoboczny \n");
		}
	}
	else
		printf("Nie uda sie utworzyc trojkata\n");
}

