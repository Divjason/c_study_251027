#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	// while : ~�ϴ� ���ȿ�
	// do while
	// for
	/*
		while(���ǽ�) -> �ش� ���ǽ��� �� (true)
		{
			�ݺ��ϰ��� �ϴ� ���๮
		}
	*/

	//int num = 0;

	//while (num < 3)
	//{
	//	printf("num is %d now \n", num);
	//	num++;

	//	// �̷��� �ݺ����� �ۼ��ϸ� �ϴ� ����!!!
	//	// ���� : ���ѷ��� => ���ѹݺ�
	//	// �������� X, �ݺ����� ���� �� �ֵ��� ���ִ� ����
	//	// ��ǻ���� �޸� ������ �� ��� > �Ҵ� X
	//}

	//while (num != -1)
	//{
	//	printf("���ڸ� �Է��ϼ���(-1 �Է½� ����) : ");
	//	scanf("%d", &num);

	//	if (num == -1)
	//		printf("�����մϴ�!");
	//	else
	//		printf("%d �� �Է��ϼ̳׿�! \n", num);
	//}

	//while (1)
	//{
	//	printf("���ѷ���");
	//}

	/*
		do while
		do : ~�� �ϴ� (�ϴ� ���� ����)
		while : ~�ϴ� ���ȿ� (���ǽĿ� ���� �ݺ��� ���� ����)
	*/

	//int num = -1;

	//do {
	//	printf("-1 �Է½�, ����! \n");
	//	printf("������ �Է��ϼ���! \n");
	//	scanf("%d", &num);
	//} while (num != -1);

	int num = 0;
	int sum = 0;

	do {
		num++;
		sum = sum + num;
	} while (num < 10);

	printf("1~10������ �� : %d", sum);

	return 0;
}