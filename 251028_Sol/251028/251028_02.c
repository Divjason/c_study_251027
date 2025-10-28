#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// up & down => 미리 사전에 어떤 숫자를 입력!
	// 상대방이 해당 숫자를 맞추는 게임
	// 1 ~ 100까지
	// 10번의 기회!
	// 1번의 기회를 사용할 때마다, up, down!
	// 20 : 정답
	// 80 : 첫번째 > 다운
	// 40 : 두번째 > 다운
	// 19 : 세번째 > 업

	int guess, target, tries = 0;

	srand((unsigned)time(NULL));
	target = rand() % 100 + 1;
	printf("정답은 %d \n", target);

	printf("=== 숫자맞추기(1 ~ 100) - 최대 10번 기회 ===");
	while (tries < 10)
	{
		printf("추측값 입력 : ");

		if (scanf("%d", &guess) != 1)
		{
			printf("입력 오류! \n");
			return 0;
		}

		tries++;

		if (guess == target)
		{
			printf("정답! %d번 만에 맞췄습니다!", tries);
			return 0;
		}
		else if (guess < target) {
			printf("Up! (남은 기회 %d) \n", 10-tries);
		}
		else {
			printf("Down! (남은 기회 %d) \n", 10 - tries);
		}
	}

	printf("아쉽네요! 정답은 %d이었습니다.", target);

	return 0;
}