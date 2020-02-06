#include <stdio.h>

int main (void)
{	
	int i;
	char sh;	
	for (i = 97; i <= 122; i++)
	sh = putchar (i);
	printf("%c", sh);
	return (0);
}
