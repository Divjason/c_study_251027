#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// C��� => �ٸ� ���α׷��� ��� ���, ���� ��Ư�� Ư¡ & ����
	// �Ϲ����� ��� => �������� => �޸�
	// ���� ����� ���� �ּ� => ��
	// �޸𸮰��� (��) => �ּ� => ȣ��
	// �޸𸮰���, ���� ���� => ���� �ٷ� ȣ��
	// ������
	
	// C���� ������ : �޸� �ּҰ�
	// �޸𸮿� ������ִ� Ư�� ���� ���� ã�ƿ� �� ����
	// �ش� �ּҰ��� ��� �ִ� ���� => ������ ����

	char cnum = 5;
	int inum = 999;
	double dnum = 3.14;

	char* cptr = &cnum;

	printf("%p", cptr);

	return 0;
}