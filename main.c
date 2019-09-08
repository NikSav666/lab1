//обучающая программа
#include <stdio.h>

int main()
{
	int a,b;
	printf ("enter two numbers: ");
	scanf("%d\n%d", &a, &b);
	printf("sum = %d \ndiff = %d\ndiv = %d\n", a + b, a - b, a / b);
	return 0;
}