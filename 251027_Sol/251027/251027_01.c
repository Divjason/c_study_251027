#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 피보나치 수열
	// 앞에 있는 2개의 항을 더해서 다음번째 항을 생성
	// 1, 1, 2, 3, 5, 8, 13, ....

	// 사용자로부터 특정 숫자를 입력받습니다. ex. 6
	// 사용자로부터 입력받은 숫자만큼 피보나치 수열을 출력하는
	// 프로그램 코드를 작성한다면?!
	// 자료구조 & 알고리즘 : 배열 & 연결리스트
	// 코.테 : 자료구조 & 알고리즘 -> 배열 VS 연결리스트
	// 빅오표기법 : 반복문 > 해당 연산구문의 효율성 체크


	int n, i;
	int a = 1, b = 1, next;

	printf("몇 개의 피보나치 수를 출력할까요? : ");
	scanf("%d", &n);

	printf("%d %d ", a, b);

	for (i = 3; i <= n; i++) 
	{
		next = a + b;
		printf("%d ", next);

		a = b;
		b = next;
	}

	return 0;
}