#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// up & down => �̸� ������ � ���ڸ� �Է�!
	// ������ �ش� ���ڸ� ���ߴ� ����
	// 1 ~ 100����
	// 10���� ��ȸ!
	// 1���� ��ȸ�� ����� ������, up, down!
	// 20 : ����
	// 80 : ù��° > �ٿ�
	// 40 : �ι�° > �ٿ�
	// 19 : ����° > ��

	int guess, target, tries = 0;

	srand((unsigned)time(NULL));
	target = rand() % 100 + 1;
	printf("������ %d \n", target);

	printf("=== ���ڸ��߱�(1 ~ 100) - �ִ� 10�� ��ȸ ===");
	while (tries < 10)
	{
		printf("������ �Է� : ");

		if (scanf("%d", &guess) != 1)
		{
			printf("�Է� ����! \n");
			return 0;
		}

		tries++;

		if (guess == target)
		{
			printf("����! %d�� ���� ������ϴ�!", tries);
			return 0;
		}
		else if (guess < target) {
			printf("Up! (���� ��ȸ %d) \n", 10-tries);
		}
		else {
			printf("Down! (���� ��ȸ %d) \n", 10 - tries);
		}
	}

	printf("�ƽ��׿�! ������ %d�̾����ϴ�.", target);

	return 0;
}