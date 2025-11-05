#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swapNumber(int num1, int num2)
{

}

int main(void)
{
	// 값을 입력받아서 함수를 호출하는 Call by Value 방식
	// 주소값을 입력받아서 함수를 호출하는 Call by reference 방식

	int number1 = 33, number2 = 99;
	swapNumber(number1, number2);

	return 0;
}