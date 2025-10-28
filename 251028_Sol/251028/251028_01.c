#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int zodiac_by_date(int m, int d) // 매개변수
{
	if ((m == 3 && d >= 21) || (m == 4 && d <= 19)) return 0; // 양
	if ((m == 4 && d >= 20) || (m == 5 && d <= 20)) return 1; // 황소
	if ((m == 5 && d >= 21) || (m == 6 && d <= 21)) return 2; // 쌍둥이
	if ((m == 6 && d >= 22) || (m == 7 && d <= 22)) return 3; // 게
	if ((m == 7 && d >= 23) || (m == 8 && d <= 22)) return 4; // 사자
	if ((m == 8 && d >= 23) || (m == 9 && d <= 23)) return 5; // 처녀
	if ((m == 9 && d >= 24) || (m == 10 && d <= 22)) return 6; // 천칭
	if ((m == 10 && d >= 23) || (m == 11 && d <= 22)) return 7; // 전갈
	if ((m == 11 && d >= 23) || (m == 12 && d <= 21)) return 8; // 사수
	if ((m == 12 && d >= 22) || (m == 1 && d <= 19)) return 9; // 염소
	if ((m == 1 && d >= 20) || (m == 2 && d <= 18)) return 10; // 물병
	if ((m == 2 && d >= 19) || (m == 3 && d <= 20)) return 11; // 물고기
	return -1;
}

int main(void)
{
	// 1차원 배열
	// 포인터
	// 2차원 배열
	// 포인터 & 배열

	// 태어난 월.일 => 생일
	// 별자리, 운세
	// 사용자에게 태어난 월.일 받아서
	// 당신의 별자리는 무엇이고, 운세는 이것이야~!!

	int m, d, z, idx;
	char zname[12][10] = {"양자리", "황소자리", "쌍둥이자리", "게자리", "사자자리", "처녀자리",
		"천칭자리", "전갈자리", "사수자리", "염소자리", "물병자리", "물고기자리"};

	char fortunes[5][100] = {
		"작은 친절이 큰 기회로 돌아옵니다.",
		"오늘은 숫자보다 사람이 먼저! 관계에 투자하세요.",
		"집중력이 오릅니다. 미뤄둔 일을 마무리해보세요.",
		"우연한 만남이 인사이트를 줍니다.",
		"초심을 기억하면 실수가 줄어듭니다."
	};

	/*char characters[5] = { 'a', 'b', 'c', 'd', 'e' };*/

	printf("월과 일을 입력하세요. (예 : 7 26) : ");
	// 예외조항 처리
	if (scanf("%d %d", &m, &d) != 2)
	{
		printf("입력 오류! \n");
		return 0;
	}
	// 양자리, 황소자리, 천칭, 물병, 물고기...
	z = zodiac_by_date(m, d); // 인수 혹은 인자값

	if (z < 0)
	{
		printf("날짜가 올바르지 않습니다. \n");
		return 0;
	}

	srand((unsigned)time(NULL));
	idx = rand() % 5; // 1 / 5 = 1, 2 / 5 = 2, 3 / 5 = 3, 4 / 5 = 4, 5 / 5 = 0

	printf("당신의 별자리는 [%s]입니다. \n", zname[z]);
	printf("당신의 오늘의 운세 : %s", fortunes[idx]);

	return 0;
}