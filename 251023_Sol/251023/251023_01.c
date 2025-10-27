#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// while : 조건식 참, 실행문 실행
	// do~while : 무조건 1회 실행
	// for : 초기식; 조건식; 증감식
	// 초기식, 증감식 => 비필수 값
	// 조건식 => 필수 값

	//int num = 0;

	//for (; num != -1;)
	//{
	//	printf("숫자를 입력하세요(-1을 입력할 경우 종료) : ");
	//	scanf("%d", &num);
	//}

	//int dan, mul;

	//for (dan = 2; dan < 10; dan++)
	//{
	//	// 2 ~ 9 정수로 증가!
	//	// 2 x 1, 2 x 2
	//	// 3 x 1, 3 x 2
	//	for (mul = 1; mul < 10; mul++)
	//	{
	//		printf("%d x %d = %d \n", dan, mul, dan*mul);
	//	}
	//	printf("------- \n");
	//}

	// switch => break; => 조건문, 반복문 => 종료 = 종결
	// 해당 구문 밖으로 나간다!!
	// 반복문 => 기저조건 X, 무한루프 빠지게 되기 때문!
	// continue => 계속하다, 지속하다
	// 마리오 게임 => 버섯돌이 => 넘어!!

	//int num = 1;

	//while (1)
	//{
	//	printf("while \n");
	//	num++;

	//	if (num > 3)
	//		break;
	//}

	//int num;

	//while (1)
	//{
	//	printf("-1 입력시, 종료 : ");
	//	scanf("%d", &num);

	//	if (num == -1)
	//		break;
	//}

	int num;

	for (num = 1; num <= 5; num++)
	{
		if (num == 3)
			continue;

		printf("%d \n", num);
	}

	return 0;
}