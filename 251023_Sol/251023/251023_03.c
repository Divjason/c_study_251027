#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char ch;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%c", &ch);

	printf("�Է��� ���ڴ� %c, ASCII �ڵ� ���� %d �Դϴ�.", ch, ch);
	// A = 65
	// Z = 90

	return 0;
}