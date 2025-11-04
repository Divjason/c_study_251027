#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int getBigger(int n1, int n2)
//{
//	if (n1 > n2)
//		return n1;
//	else if (n1 < n2)
//		return n2;
//	else
//		return 0;
//}

//void printNumber(int num)
//{
//	printf("당신이 입력한 정수는 %d 입니다.", num);
//}

int inputNumber(void)
{
	int num;
	printf("정수를 입력하세요 : ");
	scanf("%d", &num);

	return num;
}

int main(void)
{
	//int result;

	//result = getBigger(3, 5);
	//printf("첫 번째 결과 : %d\n", result);

	//result = getBigger(8, 2);
	//printf("두 번째 결과 : %d\n", result);

	//result = getBigger(4, 4);
	//printf("세 번째 결과 : %d\n", result);

	//printNumber(7);
	int result;

	result = inputNumber();
	printf("%d", result);

	return 0;
}