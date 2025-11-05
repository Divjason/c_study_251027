#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 지역 변수 :
// - 중괄호 안에서 선언.할당된 변수 : 함수, 조건문, 반복문 등
// > 함수, 조건, 반복문 실행될 때 변수는 유효성 // x

// 전역 변수 :
// 프로그래밍 코드가 실행될 때부터 종료될 때까지 유효

// static 변수 :
// 선언된 지역 내에서 생성 프로그래밍 코드가 종료될 때가지 유효

//int localFunc(int num) 
//{
//	int result = 0;
//	return result + num;
//}

//int number = 0;

//void printNumber(void)
//{
//	printf("전역변수 number는 %d을 저장하고 있다!", number);
//}

void increaseNumber(void)
{
	static int number = 0;
	number++;
	printf("number : %d \n", number);
}

int main(void)
{
	//int num = 5;
	//int result = localFunc(num);

	//printf("결과 : %d", result);

	//int number = 3;
	//printf("지역변수 number는 %d을 저장하고 있다! \n", number);
	//printNumber();

	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();

	return 0;
}