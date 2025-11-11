#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//typedef int INT;
//typedef int * PINT;
//typedef unsigned int UINT;

typedef struct point {
	int x;
	int y;
} POINT;

//typedef struct point POINT;

int main(void)
{
	// 별명 : nickname || 별칭 = alias // as 
	// 변수, 구조체 => 내가 원하는 형태의 이름으로 적용!!
	// typedef 선언 => 붙여놓은 이름으로 호출!!

	//typedef char CHAR;
	//typedef char* STR;

	//INT num = 3;
	//PINT ptr = &num;
	//UINT unum = 5;

	//CHAR ch = 'c';
	//STR str = "HELLO!";

	//printf("%d %d %d \n", num, *ptr, unum);
	//printf("%c %s \n", ch, str);

	POINT position = { 30, 60 };

	return 0;
}