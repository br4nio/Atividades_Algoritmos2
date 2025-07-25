#include <stdio.h>

int main()
{
	int n1=100, n2=50;

	if(&n1>&n2) {
		printf("n1 o maior ta np enderecao: %p\n", &n1);
	}
	else {
		printf("n2 o maior ta np enderecao: %p\n", &n2);
	}

	return 0;
}
