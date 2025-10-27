#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	// while : ~하는 동안에
	// do while
	// for
	/*
		while(조건식) -> 해당 조건식이 참 (true)
		{
			반복하고자 하는 실행문
		}
	*/

	//int num = 0;

	//while (num < 3)
	//{
	//	printf("num is %d now \n", num);
	//	num++;

	//	// 이렇게 반복문을 작성하면 일단 실행!!!
	//	// 문제 : 무한루프 => 무한반복
	//	// 기저조건 X, 반복문을 멈출 수 있도록 해주는 설정
	//	// 컴퓨터의 메모리 공간을 다 사용 > 할당 X
	//}

	//while (num != -1)
	//{
	//	printf("숫자를 입력하세요(-1 입력시 종료) : ");
	//	scanf("%d", &num);

	//	if (num == -1)
	//		printf("종료합니다!");
	//	else
	//		printf("%d 을 입력하셨네요! \n", num);
	//}

	//while (1)
	//{
	//	printf("무한루프");
	//}

	/*
		do while
		do : ~을 하다 (일단 최초 실행)
		while : ~하는 동안에 (조건식에 따라서 반복문 실행 여부)
	*/

	//int num = -1;

	//do {
	//	printf("-1 입력시, 종료! \n");
	//	printf("정수를 입력하세요! \n");
	//	scanf("%d", &num);
	//} while (num != -1);

	int num = 0;
	int sum = 0;

	do {
		num++;
		sum = sum + num;
	} while (num < 10);

	printf("1~10까지의 합 : %d", sum);

	return 0;
}