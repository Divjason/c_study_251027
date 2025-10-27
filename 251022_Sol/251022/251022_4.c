#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	/*
		for(초기식; 조건식; 증감식)
		{
			반복 실행하고자 하는 실행문
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
		printf("숫자를 입력하세요(-1 입력시 종료) : ");
		scanf("%d", &num);
	}

	return 0;
}