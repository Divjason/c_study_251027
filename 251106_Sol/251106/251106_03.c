#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getDiffByValue(int number1, int number2);
void callDiffByRef(int* number1, int* number2);

int main(void)
{
	/*
	2개의 정수가 존재한다고 가정
	30, 55

	두 정수의 차(gap)를 구하는 함수를 선언!!
	1) call - by - value
	2) call - by - reference

	> 결과값은 모두 양수!!
	*/

	int number1 = 30, number2 = 55;

	int diff = getDiffByValue(number1, number2);
	printf("두 정수의 차이 : %d \n", diff);

	callDiffByRef(&number1, &number2);
	printf("정렬 후 number1=%d, number2=%d, %d \n", number1, number2, number1-number2);

	return 0;
}

int getDiffByValue(int number1, int number2)
{
	int d = number1 - number2;
	return (d >= 0) ? d : -d;
}

void callDiffByRef(int *number1, int *number2)
{
	if (*number1 < *number2)
	{
		int temp = *number1;
		*number1 = *number2;
		*number2 = temp;
	}
}