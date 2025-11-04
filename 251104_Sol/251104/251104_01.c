#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	// 사용자에게 어떤 문자열을 받습니다.
	// 2회(번) 문자열을 받습니다.
	// hello
	// hello
	// 1회 입력받은 문자열 = 2회 입력받은 문자열
	// 만약 같으면, 같습니다.
	// 만약 다르면, 다릅니다.

	/*char name1[100], name2[100];*/

	//printf("이름1 입력 : ");
	//fgets(name1, sizeof(name1), stdin);
	//name1[strcspn(name1, "\n")] = '\0';

	//printf("이름2 입력 : ");
	//fgets(name2, sizeof(name2), stdin);
	//name2[strcspn(name2, "\n")] = '\0';

	//if (strcmp(name1, name2) == 0)
	//	printf("같습니다!");
	//else
	//	printf("같지 않습니다!");

	/*scanf();*/
	/*gets() -> 구문법*/
	/*fgets(변수명, sizeof(변수), stdin);*/
	/*
	TOM

	T O M \n \0
	*/

	/*
	서로 다른 2개의 문자열을 입력받습니다!!
	길이가 긴 문자열부터 순서대로 출력할 수 있도록 프로그래밍 코드작성

	hello
	I Love you

	I Love you hello
	*/

	char s1[200], s2[200];

	fgets(s1, sizeof(s1), stdin);
	s1[strcspn(s1, "\n")] = '\0';

	fgets(s2, sizeof(s2), stdin);
	s2[strcspn(s2, "\n")] = '\0';

	// strlen()

	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	if (len1 >= len2)
	{
		printf("%s\n", s1);
		printf("%s\n", s2);
	}
	else
	{
		printf("%s\n", s2);
		printf("%s\n", s1);
	}
	return 0;
}