#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//char* getString(void)
//{
//	char str[100];
//	printf("좋아하는 단어는? : ");
//
//	fgets(str, sizeof(str), stdin);
//	return str;
//}

char* getString(void)
{
	/*char str[100];*/
	char* str = (char*)malloc(sizeof(char)*100);
	printf("좋아하는 단어는? : ");

	fgets(str, sizeof(str), stdin);
	return str;
}

int main(void)
{
	/*
	C언어 메모리 구조
	- code 영역 : 프로그램의 코드를 저장하는 메모리 공간
	- data 영역 : 전역 변수 & static 변수를 저장하는 메모리 공간
	- stack 영역 : 지역 변수를 저장하는 메모리 공간
	- heap 영역 : 필요에 따라서 변수의 생성과 소멸을 결정할 수 있는 메모리 공간

	> 메모리 동적 할당!!
	*/

	char* result = getString();
	printf("당신이 좋아하는 단어는 : %s", result);
	if (result != NULL) free(result);

	return 0;
}