#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// ����
	// �ڷ���
	// ������
	// ���ǹ�
	// �ݺ���
	// �迭
	// ������
	// ...

	// ��� ���ǹ��� ���ǽ� : �� => ���๮, ���� => ���๮
	// if else => if else if
	// if �ʼ�
	// else, else if ���ʼ�

	//int num = 3;

	//if (num < 3)
	//	printf("num is smaller than 3!");

	//if (num == 3)
	//	printf("num is 3!");

	//if (num > 3)
	//	printf("num is bigger than 3!");

	//char alpha = 'A';

	//if (alpha == 'B')
	//	printf("alpha is B.");
	//else
	//	printf("alpha is A.");

	//if (alpha == 'A')
	//	printf("alpha is A.");

	//char alpha = 'C';

	//if (alpha == 'A')
	//	printf("alpha is A.");
	//else if (alpha == 'B')
	//	printf("alpha is B.");
	//else if (alpha == 'C')
	//	printf("alpha is C.");
	//else
	//	printf("I dont know");
	// ���� else���� ������� �ʾƵ� �Ǵ� ��Ȳ���� ����ϴ� ����
	// if ���ǹ����� �������� ó���� ���� ���

	// ��ø if�� => ��ø => �ߺ��ؼ� ���!!
	// if (����1) > if (����2) => ���๮

	int num1 = 5, num2 = 8;

	//if (num2 > 5)
	//	if (num1 == 5)
	//		printf("The first is state!");

	if (num2 > 5)
	{
		if (num1 == 5) 
		{
			printf("The first is state!");
		}
	}
		
	// ǥ���Ĺ�, ���๮
	// �޸� ó�����
	return 0;
}