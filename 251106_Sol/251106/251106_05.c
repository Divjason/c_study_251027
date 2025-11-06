#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// 랜덤값 생성!!
	// 0 ~ 10 사이의 정수를 난수의 형태로
	// 5개만 출력하는 코드 작성하기

	//srand((unsigned)time(NULL));

	//for (int i = 0; i < 5; i++)
	//{
	//	int ranNum = rand() % 11;
	//	printf("%d \n", ranNum);
	//}

	srand((unsigned)time(NULL));
	int answer = rand() % 10 + 1;
	printf("%d \n", answer);

	while (1)
	{
		int guess;
		printf("난수를 맞춰보세요 (1~10) 사이 : ");

		if (scanf("%d", &guess) != 1)
			return 0;

		if (guess == answer)
		{
			printf("정답니다! 프로그램을 종료합니다.");
			break;
		}
		else
		{
			printf("틀렸습니다. 다시 시도 하세요! \n");
		}
	}

	return 0;
}
