#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// 2����� ���� (2�ο� ����)
	// 2�ο� �������
	// 1~6 ���� �ֻ��� => 20ĭ�� ���� �����ϸ� �̱�� ������ �������
	// A : 3 / 4 / 6 / 6 / 2
	// B : 6 / 6 / 6 / 2
	// 
	// �Ͽ��� : 2����� ���� ����
	// �ֻ����� �� ������ ������ �� ���� ����

	int p1 = 0, p2 = 0, turn = 1, roll;
	srand((unsigned)time(NULL));

	printf("=== �ֻ��� ���� : 20ĭ ���� �����ϸ� �¸�! === \n");

	while (p1 < 20 && p2 < 20)
	{
		printf("�÷��̾� %d ����! ���͸� ������ �ֻ����� �������ϴ�.", turn);
		getchar(); // ���� ����ó�� ���ڿ� ����
		getchar(); // ���� ���͸� ���
		roll = rand() % 6 + 1;

		if (turn == 1)
		{
			p1 += roll;
			printf("P1 �ֻ��� : %d -> ��ġ : %d \n", roll, p1);
			turn = 2;
		}
		else {
			p2 += roll;
			printf("P2 �ֻ��� : %d -> ��ġ : %d \n", roll, p2);
			turn = 1;
		}
	}
	if (p1 >= 20 && p2 >= 20) printf("���º�!");
	else if (p1 >= 20) printf("p1 ��!");
	else printf("p2 ��!");
	return 0;
}