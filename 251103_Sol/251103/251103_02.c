#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	//char str1[50] = "apple is good";
	//char str2[50] = "berry is good";
	//char str3[50];

	//printf("str1의 길이 : %d, str2의 길이 : %d \n", strlen(str1), strlen(str2));
	//// strlen() => string + length => 문자열의 길이 확인

	//strcpy(str3, str1);
	//// strcpy() => string + copy => 문자열을 통으로 복제(복사) 붙여넣기

	//strncpy(str2, str1, 5);
	//// strncopy() => string + number + copy => 특정 문자열에서 n번째까지 복사 붙여넣기

	//printf(" %s\n %s\n %s", str1, str2, str3);

	char str1[50] = "Michael ";
	char str2[50] = "Michael ";

	strcat(str1, "Bolton");
	printf("%s \n", str1);

	strncat(str2, "Jackson Five", 7);
	printf("%s", str2);

	// strcat() : string + concatenate // concat()
	// strncat() : string + number + concatenate

	return 0;
}