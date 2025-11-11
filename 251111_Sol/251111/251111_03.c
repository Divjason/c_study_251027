#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person
{
	char name[30];
	int age;
};

int main(void)
{
	// 구조체 = structure
	// 건물, 건설
	// 단일 값을 가지고 있는 요소들을 하나로 묶어서 사용하는 자료형태 구조

	// 구조체 정의문
	//struct person
	//{
	//	char name[30];
	//	int age;
	//};

	// 구조체 타입을 따르는 변수 선언방법
	//struct person boy;
	//struct person girl;

	//struct person boy, girl;

	//strcpy(boy.name, "소년");
	//strcpy(girl.name, "소녀");

	//boy.age = 12;
	//girl.age = 9;

	//struct person boy = { "소년", 12 };
	//struct person girl = { "소녀", 9 };

	//printf("소년의 이름은 : %s 나이는 %d세 \n", boy.name, boy.age);
	//printf("소녀의 이름은 : %s 나이는 %d세 \n", girl.name, girl.age);

	//int iarr[3];
	//struct person parr[3];

	struct person boy[3] = {
		{"손흥민", 30},
		{"이강인", 24},
		{"김민재", 28}
	};

	struct person girl[3];

	for (int i = 0; i < 3; i++)
	{
		printf("소년의 이름은 %s 나이는 %d세 \n", boy[i].name, boy[i].age);
	}


	return 0;
}