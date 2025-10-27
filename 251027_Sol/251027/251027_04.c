#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int user, com;
	int userWin = 0, comWin = 0;

	srand((unsigned)time(NULL));

	printf("=== ����(0) ����(1) ��(2) - 3�� 2���� === \n");

	while (userWin < 2 && comWin < 2)
	{
		printf("����� ����(0:����, 1:����, 2:��) : ");

		if(scanf("%d", &user) != 1 || user < 0 || user > 2) {
			printf("�Էµ� ���� �ùٸ��� �ʽ��ϴ�! \n");
			return 0;
		}

		// 0, 1, 2 ���� ���� �޾ƿ� �� �־��!!!
		// rand()

		// 3 % 3 = 0, 4 % 3 = 1, 5 % 3 = 2, 6 % 3 = 0
		// �����Լ� ���� => ���ӽ��� => 0 1 2
		// 1 2 0
		// 1 2 0
		// 1 2 0
		// seed �� ���� > �����ϰ� ����
		// �ð� // �и��� 1970 1. 1

		com = rand() % 3;
		printf("��ǻ�� : %d\n", com);

		if (user == com) {
			printf("�����ϴ�! �ٽ�!");
			continue;
		}

		if ((user == 0 && com == 2) || (user == 1 && com == 0) || (user == 2 && com == 1)) {
			userWin++;
			printf("����� �̰���ϴ�! (%d : %d) \n", userWin, comWin);
		}
		else {
			comWin++;
			printf("��ǻ�Ͱ� �̰���ϴ�! (%d : %d) \n", userWin, comWin);
		}
	}

	printf("������� : %s", (userWin == 2) ? "����� �¸�!" : "��ǻ���� �¸�");

	return 0;
}