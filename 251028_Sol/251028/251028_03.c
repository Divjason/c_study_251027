#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// 2사람이 존재 (2인용 게임)
	// 2인용 보드게임
	// 1~6 숫자 주사위 => 20칸을 먼저 도착하면 이기는 심플한 보드게임
	// A : 3 / 4 / 6 / 6 / 2
	// B : 6 / 6 / 6 / 2
	// 
	// 턴오버 : 2사람이 게임 참여
	// 주사위는 그 누구도 예측할 수 없는 숫자

	int p1 = 0, p2 = 0, turn = 1, roll;
	srand((unsigned)time(NULL));

	printf("=== 주사위 경주 : 20칸 먼저 도착하면 승리! === \n");

	while (p1 < 20 && p2 < 20)
	{
		printf("플레이어 %d 차례! 엔터를 누르면 주사위가 굴려집니다.", turn);
		getchar(); // 최초 개행처리 문자열 제거
		getchar(); // 실제 엔터를 대기
		roll = rand() % 6 + 1;

		if (turn == 1)
		{
			p1 += roll;
			printf("P1 주사위 : %d -> 위치 : %d \n", roll, p1);
			turn = 2;
		}
		else {
			p2 += roll;
			printf("P2 주사위 : %d -> 위치 : %d \n", roll, p2);
			turn = 1;
		}
	}
	if (p1 >= 20 && p2 >= 20) printf("무승부!");
	else if (p1 >= 20) printf("p1 승!");
	else printf("p2 승!");
	return 0;
}