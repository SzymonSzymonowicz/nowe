#include <stdio.h>
void powiel(char znak)
{
	for (int i=0;i<20;i++)
		printf("%c", znak);
	printf("\n");
}
void main()
{
	char znak;

	printf("Podaj znak, który chcesz powielić 20 razy: ");
	scanf("%c", &znak);
	powiel(znak);
}