#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	/*
		for(�ʱ��; ���ǽ�; ������)
		{
			�ݺ� �����ϰ��� �ϴ� ���๮
		}
	*/

	//int i;

	//for (i = 0; i < 3; i++)
	//{
	//	printf("i is %d now \n", i);
	//}

	int num = 0;

	for (; num != -1;)
	{
		printf("���ڸ� �Է��ϼ���(-1 �Է½� ����) : ");
		scanf("%d", &num);
	}

	return 0;
}