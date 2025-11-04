#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int outer = 10;

int main(void)
{
	int inner = 3;
	inner++;

	printf("%d\n", inner);
	inner++;

	return 0;

	/*
	C언어를 통해서 어떤 변수가 선언되면, 선언된 변수안에 담긴 값이
	컴퓨터 메모리 공간에 저장되는 장소가 상황에따라 달라질 수 있다!

	프로그램을 실행하면, 프로그램의 값을 저장하는 공간이 다음과 같음!!

	1) 코드(Code)영역
	> 프로그램의 전체 코드를 저장하는 메모리 공간

	2) 데이터(Data)영역
	> 특별하게 변수를 위한 영역.
	> 프로그램의 시작과 동시에 메모리 공간, 프로그램이 종료할 때까지 사용
	> 전역변수 Global variants = outer

	3) 스택(Stack)영역
	> 특별하게 변수를 위한 영역.
	> 특정 함수 내에서만 사용가능한 변수를 위한 공간
	> 그 특정 함수를 호출을 할 때, 해당 변수는 메모리 공간을 사용
	> 지역변수 Local variants = inner

	4) 힙(Heap)영역
	> 특별하게 변수를 위한 영역.
	> 특정 시점에만 필요한 변수를 관리하는 영역
	> scanf() => 값을 받아서 무언가를 하는 경우

	*/
}