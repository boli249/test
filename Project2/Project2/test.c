#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;

	scanf("%d%d", &num1, &num2);

	int sum = 0;
	sum = num1 + num2;
	printf("sum = %d", sum);
	extern int a;
	printf("a = %d", a);
	return 0;
}