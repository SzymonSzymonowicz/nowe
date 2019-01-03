#include <stdio.h>

int nwd(int liczba1, int liczba2)
{
	int c;
	while (liczba2 != 0)
	{
		c = liczba1 % liczba2;
		liczba1 = liczba2;
		liczba2 = c;
	}
	return liczba1;
}
void main()
{
	printf("NWD(%d, %d) = %d\n", 10, 14, nwd(10, 14));
	printf("NWD(%d, %d) = %d\n", 28, 14, nwd(28, 14));
	printf("NWD(%d, %d) = %d\n", 100, 30, nwd(100, 30));
	printf("NWD(%d, %d) = %d\n", 1024, 64, nwd(1024, 64));
}