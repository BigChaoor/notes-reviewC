#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void f(int *p);
void g(int k);

int main() {
	int i = 6;
	printf("&i = %p\n", &i);
	f(&i);
	g(i);
	
	return 0;
}

void f(int *p)
{
	printf("p = %p\n", p);
	printf("*p = %d\n", *p);
	*p = 26;
}

void g(int k)
{
	printf("k = %d", k);
}

