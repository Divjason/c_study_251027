#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double cm_to_m(int cm)
{
	return cm / 100.0;
}

int main(void)
{
	/*
	사용자로부터 키를 cm 단위로 입력을 받으세요.
	입력받은 값을 m 단위로 환산해서 출력하는 프로그램을
	작성해보세요!!

	ex) 180 => 1.80
	*/

	int cm;

	printf("키를 cm 단위로 입력하세요 : ");
	scanf("%d", &cm);

	printf("결과 : %.2f m", cm_to_m(cm));

	return 0;
}