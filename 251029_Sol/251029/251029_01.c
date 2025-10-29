#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//char cnum = 5;
	//int inum = 999;
	//double dnum = 3.14;

	//char* cptr = &cnum; // * + 변수명 => 포인터 변수 선언 => &cnum 
	//int* iptr = &inum;
	//double* dptr = &dnum;

	//printf("%p \n", cptr);
	//printf("%p \n", iptr);
	//printf("%p \n", dptr);

	//int num = 5;
	//double *ptr1 = &num;

	//int num = 10;
	//int* pnum;

	//pnum = &num; // 포인터 변수 pnum에 num의 주소를 저장!

	//*pnum = 20; // * => 포인터 변수의 주소를 찾아옴!

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

	// 현재는 출력되는 값이 100 200
	/*
	
	어떤 연산처리 작업 과정을 거쳐서
	200 100 
	으로 출력되게 하고 싶다면?!

	*/

	int* tmp = ptr1;
	ptr1 = ptr2;
	ptr2 = tmp;

	printf("%d %d \n", *ptr1, *ptr2);

	return 0;
}