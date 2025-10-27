#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	// 조건문 > if / if else / if else if / if else if else
	// 프로그래밍 언어 위대함 > 인간이 하지 못하는 기능 구현
	// 1) 반복문
	// 2) 조건문
	// 3) 함수

	/*
	switch(표현식)
	{
		case 1:
		break;

		case 2:
		break;

		case 3:
		break;

		default :
		break;
	}
	
	*/

	int num;
	printf("input some positive number : ");
	scanf("%d", &num);

	switch (num)
	{
		case 1:
			printf("num is 1\n");
			break;
		case 2:
			printf("num is 2\n");
			break;
		case 3:
			printf("num is 3\n");
			break; // 종료 혹은 종결!! => swtich 문의 종료!!
		default:
			printf("maybe bigger than 3\n");
			break;
	}

	printf("switch state end.");

	return 0;
}