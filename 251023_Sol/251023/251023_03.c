#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch;

	printf("문자를 입력하세요 : ");
	scanf("%c", &ch);

	printf("입력한 문자는 %c, ASCII 코드 값은 %d 입니다.", ch, ch);
	// A = 65
	// Z = 90

	return 0;
}