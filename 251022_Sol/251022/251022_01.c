#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	// ���ǹ� > if / if else / if else if / if else if else
	// ���α׷��� ��� ������ > �ΰ��� ���� ���ϴ� ��� ����
	// 1) �ݺ���
	// 2) ���ǹ�
	// 3) �Լ�

	/*
	switch(ǥ����)
	{
		case 1:
		break;

		case 2:
		break;

		case 3:
		break;

		default :
		break;
	}
	
	*/

	int num;
	printf("input some positive number : ");
	scanf("%d", &num);

	switch (num)
	{
		case 1:
			printf("num is 1\n");
			break;
		case 2:
			printf("num is 2\n");
			break;
		case 3:
			printf("num is 3\n");
			break; // ���� Ȥ�� ����!! => swtich ���� ����!!
		default:
			printf("maybe bigger than 3\n");
			break;
	}

	printf("switch state end.");

	return 0;
}