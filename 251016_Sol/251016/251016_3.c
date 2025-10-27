#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//int income, salary, bonus;

	//income = salary = bonus = 100;

	//salary = 200;
	//bonus = 30;

	//income = salary + bonus;

	//int takehome, tax;
	//tax = 20;

	//takehome = income - tax;

	//printf("%d", takehome);

	double seed_money, target_money, annual_interest;

	printf("Input seed money : ");
	scanf("%lf", &seed_money);

	printf("Input target money : ");
	scanf("%lf", &target_money);

	printf("Input annual interest : ");
	scanf("%lf", &annual_interest);

	double fund = seed_money;
	int year_count = 0;

	while (fund < target_money)
	{
		fund = fund + fund * annual_interest / 100.0;
		year_count = year_count + 1;

		printf("Year %d, fund %f\n", year_count, fund);
	}

	printf("It takes %d year\n", year_count);

	return 0;
}