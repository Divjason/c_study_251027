#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int FirstFunc(int a, int b)
{
	return a + b;
}

double SecondFunc(double d)
{
	return d * 2;
}

void ThirdFunc(char *c)
{
	printf("¹®ÀÚ : %s \n", c);
}

int main(void)
{

	int (*first)(int, int);
	double (*second)(double);
	void (*third)(char*);

	first = FirstFunc;
	second = SecondFunc;
	third = ThirdFunc;

	printf("%d \n", first(3, 4));
	printf("%.1f \n", second(1.5));
	third("A");

	return 0;
}