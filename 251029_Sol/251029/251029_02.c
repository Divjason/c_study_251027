#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// �迭�� �̸��� ������ ������ ������ ��
	// ���� ��ǻ�Ϳ� ����� �迭 �����Ͱ� ���۵Ǵ� �޸� �ּҸ� �迭
	// �� �̸��� ������ �ִ�
	// ������ ������ Ȱ���ؼ� ���ο� ���� �Ҵ� �ޱ⵵ ������
	// �迭�� �̸��� ������ ������ ������ �ص�, ���� ������ ���� ���Ҵ� �� ���� ����!
	//int myArr[3] = {1, 2, 3};
	//printf("%d \n", myArr[0]);
	//printf("%d \n", myArr[1]);
	//printf("%d \n", myArr[2]);

	//printf("%p \n", myArr);
	//printf("%p \n", &myArr[0]);
	//printf("%p \n", &myArr[1]);
	//printf("%p \n", &myArr[2]);

	// 9 A B C
	// D E F 0
	// �迭�ȿ� ����ִ� ���� int ���� �Է��ڷ��� => 4

	// int : 4����Ʈ => 32��Ʈ => 2^32
	// short : 2����Ʈ => 16��Ʈ => 2^16

	//short sarr[3] = { 1, 2, 3 };
	//int iarr[3] = { 10, 20, 30 };

	//printf("%d %d %d \n", sarr[0], sarr[1], sarr[2]);
	//printf("%d %d %d \n", iarr[0], iarr[1], iarr[2]);

	//printf("%d %d %d \n", *sarr, *(sarr + 1), *(sarr + 2));
	//printf("%d %d %d \n", *iarr, *(iarr + 1), *(iarr + 2));
	///*printf("%d %d %d \n", iarr[0], iarr[1], iarr[2]);*/

	//printf("%p %p %p \n", &sarr[0], &sarr[1], &sarr[2]);
	//printf("%p %p %p \n", &iarr[0], &iarr[1], &iarr[2]);

	// �迭
	// ������ ����
	// �迭�̸� = ������ ����
	// ������ �迭 : ������ ���� ����ؼ� �迭�� �����ϸ� �װ��� ������ �迭�̶�� �θ�

	int n1 = 3, n2 = 6, n3 = 9;

	int* ptr1 = &n1;
	int* ptr2 = &n2;
	int* ptr3 = &n3;

	int* parr[3] = { ptr1, ptr2, ptr3 };

	printf("%d %d %d \n", *parr[0], *parr[1], *parr[2]);
	printf("%p %p %p \n", parr[0], parr[1], parr[2]);

	return 0;
}