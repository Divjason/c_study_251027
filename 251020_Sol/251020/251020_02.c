#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 산술연산자
	// + - * / % (나머지 연산자)

	//int num1 = 7, num2 = 3;

	//printf("%d + %d = %d \n", num1, num2, num1 + num2);
	//printf("%d - %d = %d \n", num1, num2, num1 - num2);
	//printf("%d * %d = %d \n", num1, num2, num1 * num2);
	//printf("%d / %d = %d \n", num1, num2, num1 / num2);
	//printf("%d %% %d = %d \n", num1, num2, num1 % num2);

	// 대입연산자

	//int num01, num02;

	//num01 = 20;
	//num02 = 20 + 10;

	// 좌항과 우항의 값이 같다 라는 의미로 오해!!
	// 1 == "1", 1 !== "1"

	// 복합대입연산자

	//int num1 = 3, num2 = 4;

	//num1 = num1 + 7;
	//num1 += 7;
	//num2 *= 4;

	//printf("%d %d \n", num1, num2);

	// 비교연산자
	// > < == ! => not, !=, <= >=
	// 2진법, 2진수 => 0, 1 => false VS true

	//int a = 10, b = 11;

	//printf("a == b : %d \n", a == b);
	//printf("a > b : %d \n", a > b);
	//printf("a < b : %d \n", a < b);
	//printf("a >= b : %d \n", a >= b);
	//printf("a <= b : %d \n", a <= b);
	//printf("a != b : %d \n", a != b);

	// 증감연산자

	// ex. num++ ++(증감연산자)num(피연산자) => 증가
	// 증감연산자가 피연산자보다 먼저 사용되는경우 => 증가 혹은 감소우선
	// 증감연산자가 피연산자보다 나중에 사용되는경우 => 다른연산을 우선처리 후 증가 혹은 감소 
	// num-- --num => 감소
	// 전위연산자 = prefix => ++피연산자
	// 후위연산자 = postfix => 피연산자++

	//int a = 10, b = 10;

	//printf("a : %d \n", a);
	//printf("a : %d \n", ++a);
	//printf("a : %d \n", a);

	//printf("b : %d \n", b);
	//printf("b : %d \n", b++);
	//printf("b : %d \n", b);

	// 연산자 우선순위!!!

	// (3 + 4) * (5 + 6)
	/*
	1. 증감연산자 ++ / --
	2. 산술연산자 + - * / %
	3. 비교연산자 > < >=
	4. 대입연산자 += *=
	*/ 

	//int num1 = 3, num2 = 5;

	//int result = num1++ + num2 * 3;
	//printf("연산결과 : %d", result);

	//int kor, eng, math, soc, sci;

	//printf("각 과목별 점수를 입력하세요 : \n");
	//scanf("%d %d %d %d %d", &kor, &eng, &math, &soc, &sci);

	//double avg = (kor + eng + math + soc + sci) / 5.0;
	//printf("평균점수 : %0.2f", avg);

	// 논리연산자
	// A와 B가 모두 참이면 참 (A, B 중 둘 중에 하나라도 참이 아니면 거짓)
	// A && B => 참
	
	// A와 B중 하나라도 참이면 참
	// A || B => 둘 중에 하나라도 참이면 참

	// ! => not
	// !A => A가 참이면 거짓, A가 거짓이면 참

	//int result1 = 1 && 1;
	//int result2 = 1 && 0;
	//int result3 = 1 || 0;
	//int result4 = !0;

	//printf("%d %d %d %d", result1, result2, result3, result4);

	// 삼항조건 연산자
	// 항을 3개로 쪼개서 연산식 = 참, 거짓인 경우에 출력할 값을 분류

	//int num, absolute;

	//printf("정수 입력 : ");
	//scanf("%d", &num);

	//absolute = num > 0 ? num : num * -1;
	//printf("절대값 : %d", absolute);

	// 비트연산자
	// 0, 1 => 이진수 연산처리
	// 비트(bit) > 8개의 비트 = 1바이트(byte)
	// 2^8 => 256
	// 디자인 전공 => 256컬러 => 그래픽 요소 처리 => 256컬러
	// 0 ~ 255
	// 3원색 = RGB => 
	// 흰색 = 255 255 255 => 
	// 검정색 = 0 0 0
	// 255 = 16^2
	// 16 * 16 
	// 0 ~ 9 a ~ f
	// #ffffff = 헥스코드

	// + @
	return 0;
}