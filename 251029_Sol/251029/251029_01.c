#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//char cnum = 5;
	//int inum = 999;
	//double dnum = 3.14;

	//char* cptr = &cnum; // * + ������ => ������ ���� ���� => &cnum 
	//int* iptr = &inum;
	//double* dptr = &dnum;

	//printf("%p \n", cptr);
	//printf("%p \n", iptr);
	//printf("%p \n", dptr);

	//int num = 5;
	//double *ptr1 = &num;

	//int num = 10;
	//int* pnum;

	//pnum = &num; // ������ ���� pnum�� num�� �ּҸ� ����!

	//*pnum = 20; // * => ������ ������ �ּҸ� ã�ƿ�!

	//printf("num : %d \n", num);

	//(*pnum)++; // * < ++
	//(*pnum)++;

	//printf("num : %d \n", num);
	//printf("pnum : %d", *pnum);

	//int a = 10;
	//int* p = &a;

	//*p = 20;
	//printf("%d \n", a);

	//*p = 50;
	//printf("%d \n", a);

	//int number = 10;
	//int* pnumber = &number;

	//printf("%d \n", *pnumber);
	//printf("%p \n", pnumber);

	int n1 = 100, n2 = 200;

	int* ptr1 = &n1;
	int* ptr2 = &n2;

	printf("%d %d \n", *ptr1, *ptr2);

	// ����� ��µǴ� ���� 100 200
	/*
	
	� ����ó�� �۾� ������ ���ļ�
	200 100 
	���� ��µǰ� �ϰ� �ʹٸ�?!

	*/

	int* tmp = ptr1;
	ptr1 = ptr2;
	ptr2 = tmp;

	printf("%d %d \n", *ptr1, *ptr2);

	return 0;
}