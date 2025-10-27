#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int user, com;
	int userWin = 0, comWin = 0;

	srand((unsigned)time(NULL));

	printf("=== 가위(0) 바위(1) 보(2) - 3판 2선승 === \n");

	while (userWin < 2 && comWin < 2)
	{
		printf("당신의 선택(0:가위, 1:바위, 2:보) : ");

		if(scanf("%d", &user) != 1 || user < 0 || user > 2) {
			printf("입력된 값이 올바르지 않습니다! \n");
			return 0;
		}

		// 0, 1, 2 랜덤 값을 받아올 수 있어야!!!
		// rand()

		// 3 % 3 = 0, 4 % 3 = 1, 5 % 3 = 2, 6 % 3 = 0
		// 랜덤함수 실행 => 게임실행 => 0 1 2
		// 1 2 0
		// 1 2 0
		// 1 2 0
		// seed 값 변경 > 무한하게 변경
		// 시간 // 밀리초 1970 1. 1

		com = rand() % 3;
		printf("컴퓨터 : %d\n", com);

		if (user == com) {
			printf("비겼습니다! 다시!");
			continue;
		}

		if ((user == 0 && com == 2) || (user == 1 && com == 0) || (user == 2 && com == 1)) {
			userWin++;
			printf("당신이 이겼습니다! (%d : %d) \n", userWin, comWin);
		}
		else {
			comWin++;
			printf("컴퓨터가 이겼습니다! (%d : %d) \n", userWin, comWin);
		}
	}

	printf("최종결과 : %s", (userWin == 2) ? "당신의 승리!" : "컴퓨터의 승리");

	return 0;
}