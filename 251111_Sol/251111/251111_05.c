#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char name[30];
	int age;
} Person;

int main(void)
{
	/*
	
	int num;
	int* ptr = &num;

	typedef struct {
		char name[30];
		int age;
	} Person

	Person boy;
	Person *ptr = &boy; // 구조체 포인터 변수

	(*ptr).age = 10; // 구조체 포인터 변수 값을 할당 1번
	ptr->age = 10; // 구조체 포인터 변수 값을 할당 2번

	*/

	Person boy = { "호날두", 35 };
	Person* ptr = &boy;

	printf("%s %d \n", (*ptr).name, (*ptr).age);
	printf("%s %d \n", ptr->name, ptr->age);

	return 0;
}