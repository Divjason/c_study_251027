#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{	
	// �迭 = array
	// list

	// ���� ���� > �Ҵ� > 1���� ���� ����
	// ����, �Ǽ�, ��, ����

	// ������ ���� �Ҵ� (*�������� ���� �Ҵ�)

	//int myArr01[3] = { 1, 2, 3 };
	//int myArr02[] = { 1, 2, 3 };
	//char characters[] = {'a', 'b', 'c', 'd'};

	// ���
	// CRUD
	// Create
	// Read
	// Update
	// Delete

	// myArr01[index ��]

	//printf("%d %d %d \n", myArr01[0], myArr01[1], myArr01[2]);
	//printf("%c %c %c", characters[0], characters[1], characters[2]);

	// ���ڿ� ("ABC DEF") VS ���� ('A')
	// �ε��� ���� ������ �ִ� �ڷᱸ��
	// �ݺ� ��ȸ�� �� �ִ� iterable �Ӽ�

	int i;
	int odd[3];
	int even[5] = {2, 4, 6, 8, 10};

	odd[0] = 1;
	odd[1] = 3;
	odd[2] = 5;

	printf("%d %d %d \n", odd[0], odd[1], odd[2]);

	for (i = 0; i < 5; i++)
	{
		printf("%d ", even[i]);
	}

	return 0;
}