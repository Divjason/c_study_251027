#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// while : ���ǽ� ��, ���๮ ����
	// do~while : ������ 1ȸ ����
	// for : �ʱ��; ���ǽ�; ������
	// �ʱ��, ������ => ���ʼ� ��
	// ���ǽ� => �ʼ� ��

	//int num = 0;

	//for (; num != -1;)
	//{
	//	printf("���ڸ� �Է��ϼ���(-1�� �Է��� ��� ����) : ");
	//	scanf("%d", &num);
	//}

	//int dan, mul;

	//for (dan = 2; dan < 10; dan++)
	//{
	//	// 2 ~ 9 ������ ����!
	//	// 2 x 1, 2 x 2
	//	// 3 x 1, 3 x 2
	//	for (mul = 1; mul < 10; mul++)
	//	{
	//		printf("%d x %d = %d \n", dan, mul, dan*mul);
	//	}
	//	printf("------- \n");
	//}

	// switch => break; => ���ǹ�, �ݺ��� => ���� = ����
	// �ش� ���� ������ ������!!
	// �ݺ��� => �������� X, ���ѷ��� ������ �Ǳ� ����!
	// continue => ����ϴ�, �����ϴ�
	// ������ ���� => �������� => �Ѿ�!!

	//int num = 1;

	//while (1)
	//{
	//	printf("while \n");
	//	num++;

	//	if (num > 3)
	//		break;
	//}

	//int num;

	//while (1)
	//{
	//	printf("-1 �Է½�, ���� : ");
	//	scanf("%d", &num);

	//	if (num == -1)
	//		break;
	//}

	int num;

	for (num = 1; num <= 5; num++)
	{
		if (num == 3)
			continue;

		printf("%d \n", num);
	}

	return 0;
}