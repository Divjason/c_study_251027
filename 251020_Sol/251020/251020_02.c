#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// ���������
	// + - * / % (������ ������)

	//int num1 = 7, num2 = 3;

	//printf("%d + %d = %d \n", num1, num2, num1 + num2);
	//printf("%d - %d = %d \n", num1, num2, num1 - num2);
	//printf("%d * %d = %d \n", num1, num2, num1 * num2);
	//printf("%d / %d = %d \n", num1, num2, num1 / num2);
	//printf("%d %% %d = %d \n", num1, num2, num1 % num2);

	// ���Կ�����

	//int num01, num02;

	//num01 = 20;
	//num02 = 20 + 10;

	// ���װ� ������ ���� ���� ��� �ǹ̷� ����!!
	// 1 == "1", 1 !== "1"

	// ���մ��Կ�����

	//int num1 = 3, num2 = 4;

	//num1 = num1 + 7;
	//num1 += 7;
	//num2 *= 4;

	//printf("%d %d \n", num1, num2);

	// �񱳿�����
	// > < == ! => not, !=, <= >=
	// 2����, 2���� => 0, 1 => false VS true

	//int a = 10, b = 11;

	//printf("a == b : %d \n", a == b);
	//printf("a > b : %d \n", a > b);
	//printf("a < b : %d \n", a < b);
	//printf("a >= b : %d \n", a >= b);
	//printf("a <= b : %d \n", a <= b);
	//printf("a != b : %d \n", a != b);

	// ����������

	// ex. num++ ++(����������)num(�ǿ�����) => ����
	// ���������ڰ� �ǿ����ں��� ���� ���Ǵ°�� => ���� Ȥ�� ���ҿ켱
	// ���������ڰ� �ǿ����ں��� ���߿� ���Ǵ°�� => �ٸ������� �켱ó�� �� ���� Ȥ�� ���� 
	// num-- --num => ����
	// ���������� = prefix => ++�ǿ�����
	// ���������� = postfix => �ǿ�����++

	//int a = 10, b = 10;

	//printf("a : %d \n", a);
	//printf("a : %d \n", ++a);
	//printf("a : %d \n", a);

	//printf("b : %d \n", b);
	//printf("b : %d \n", b++);
	//printf("b : %d \n", b);

	// ������ �켱����!!!

	// (3 + 4) * (5 + 6)
	/*
	1. ���������� ++ / --
	2. ��������� + - * / %
	3. �񱳿����� > < >=
	4. ���Կ����� += *=
	*/ 

	//int num1 = 3, num2 = 5;

	//int result = num1++ + num2 * 3;
	//printf("������ : %d", result);

	//int kor, eng, math, soc, sci;

	//printf("�� ���� ������ �Է��ϼ��� : \n");
	//scanf("%d %d %d %d %d", &kor, &eng, &math, &soc, &sci);

	//double avg = (kor + eng + math + soc + sci) / 5.0;
	//printf("������� : %0.2f", avg);

	// ��������
	// A�� B�� ��� ���̸� �� (A, B �� �� �߿� �ϳ��� ���� �ƴϸ� ����)
	// A && B => ��
	
	// A�� B�� �ϳ��� ���̸� ��
	// A || B => �� �߿� �ϳ��� ���̸� ��

	// ! => not
	// !A => A�� ���̸� ����, A�� �����̸� ��

	//int result1 = 1 && 1;
	//int result2 = 1 && 0;
	//int result3 = 1 || 0;
	//int result4 = !0;

	//printf("%d %d %d %d", result1, result2, result3, result4);

	// �������� ������
	// ���� 3���� �ɰ��� ����� = ��, ������ ��쿡 ����� ���� �з�

	//int num, absolute;

	//printf("���� �Է� : ");
	//scanf("%d", &num);

	//absolute = num > 0 ? num : num * -1;
	//printf("���밪 : %d", absolute);

	// ��Ʈ������
	// 0, 1 => ������ ����ó��
	// ��Ʈ(bit) > 8���� ��Ʈ = 1����Ʈ(byte)
	// 2^8 => 256
	// ������ ���� => 256�÷� => �׷��� ��� ó�� => 256�÷�
	// 0 ~ 255
	// 3���� = RGB => 
	// ��� = 255 255 255 => 
	// ������ = 0 0 0
	// 255 = 16^2
	// 16 * 16 
	// 0 ~ 9 a ~ f
	// #ffffff = ���ڵ�

	// + @
	return 0;
}