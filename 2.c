#include <stdio.h>
#include <stdbool.h>

bool czy_peln(unsigned short wiek)
{
	if (wiek<18)
		return false;
	else
		return true;
}

void main()
{
	unsigned short wiek;
	printf("Podaj wiek: ");
	scanf("%hu", &wiek);

	if(czy_peln(wiek))
		printf("Jesteś osobą pełnoletnią\n");
	else
		printf("Nie jestes pelnoletni\n");

	printf("Funkcja zwrocila wartosc: %hu \n", czy_peln(wiek));

	bool x = czy_peln(wiek);
}