#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//int arr[5] = {10, 20, 30, 40, 50};
	//int* ptr = arr;

	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d ", *ptr);
	//	ptr++;
	//}

	// �迭
	// ���ڿ�
	// ������ �迭: �迭 �ȿ� �Ǵٸ� �迭 ����ִ� ��
	// > ��� �� int myArr[2][3] : 2���� �迭
	// > ��� �� int myArr[2][2][3] : 2���� �迭
	// > ���� ����, ������ ����.����
	// > ���׹��� && ������ ���α׷��� ����
	int i, j;

	int arr[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			arr[i][j] = 10;
		}
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}