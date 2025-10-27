#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//printf("%d\n", 7 / 2);
	//printf("%f", 7.0 / 2.0);

	int seconds = 0, minutes = 0, hours = 0;

	while (seconds >= 0)
	{
		printf("Input seconds : ");
		scanf("%d", &seconds);

		minutes = seconds / 60;
		seconds %= 60;

		hours = minutes / 60;
		minutes %= 60;

		printf("%d hours %d minutes %d seconds\n", hours, minutes, seconds);
	}

	return 0;
}