#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// C언어 => 다른 프로그래밍 언어 대비, 아주 독특한 특징 & 성격
	// 일반적인 언어 => 변수선언 => 메모리
	// 변수 선언된 공간 주소 => 값
	// 메모리공간 (값) => 주소 => 호출
	// 메모리공간, 직접 접근 => 값을 바로 호출
	// 포인터
	
	// C언어에서 포인터 : 메모리 주소값
	// 메모리에 담겨져있는 특정 값을 직접 찾아올 수 있음
	// 해당 주소값을 담고 있는 변수 => 포인터 변수

	char cnum = 5;
	int inum = 999;
	double dnum = 3.14;

	char* cptr = &cnum;

	printf("%p", cptr);

	return 0;
}