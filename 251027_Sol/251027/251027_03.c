#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//char greet[] = "Hello, Guys!"; // 12개의 문자로 구성된 1개의 문자열
	//printf("1차원 배열 greet의 길이는 : %d", sizeof(greet));
	//// Hello, Guys!\0 (null 문자)


	//char goodbye[50] = "Good BYE!";

	//char mind[30] = "I Love programming";
	//printf("%s \n", mind);

	//mind[7] = '\0';
	//printf("%s \n", mind);

	//mind[1] = '\0';
	//printf("%s \n", mind);

	//char str[50];

	//printf("문자열을 입력하세요 : ");
	//scanf("%s", str); // 다른 자료구조의 값을 변수에 입력받을 때와 달리 & x

	//printf("입력된 문자열 : %s", str);

	char s[100];
	int i;

	printf("영어단어 입력 : ");
	scanf("%s", s);

	int n = strlen(s);
	// hello
	// {1, 2, 3, 4}
	
	for (i = n - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}

	return 0;
}