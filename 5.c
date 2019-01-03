#include <stdio.h>
int silnia(int arg);

void main(void)
{
	int n=5;
	printf("%d! = %d\n", n ,silnia(n));
}
int silnia(int arg)
{
	if(!arg)
		return 1;
	else
		return arg*silnia(arg-1);
}