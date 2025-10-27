#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 변수
	// 자료형
	// 연산자
	// 조건문
	// 반복문
	// 배열
	// 포인터
	// ...

	// 모든 조건문은 조건식 : 참 => 실행문, 거짓 => 실행문
	// if else => if else if
	// if 필수
	// else, else if 비필수

	//int num = 3;

	//if (num < 3)
	//	printf("num is smaller than 3!");

	//if (num == 3)
	//	printf("num is 3!");

	//if (num > 3)
	//	printf("num is bigger than 3!");

	//char alpha = 'A';

	//if (alpha == 'B')
	//	printf("alpha is B.");
	//else
	//	printf("alpha is A.");

	//if (alpha == 'A')
	//	printf("alpha is A.");

	//char alpha = 'C';

	//if (alpha == 'A')
	//	printf("alpha is A.");
	//else if (alpha == 'B')
	//	printf("alpha is B.");
	//else if (alpha == 'C')
	//	printf("alpha is C.");
	//else
	//	printf("I dont know");
	// 굳이 else문을 사용하지 않아도 되는 상황에서 사용하는 경우는
	// if 조건문에서 예외조항 처리를 위한 경우

	// 중첩 if문 => 중첩 => 중복해서 사용!!
	// if (조건1) > if (조건2) => 실행문

	int num1 = 5, num2 = 8;

	//if (num2 > 5)
	//	if (num1 == 5)
	//		printf("The first is state!");

	if (num2 > 5)
	{
		if (num1 == 5) 
		{
			printf("The first is state!");
		}
	}
		
	// 표현식문, 실행문
	// 메모리 처리방식
	return 0;
}