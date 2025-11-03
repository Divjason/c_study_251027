#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 문자열 & 포인터
	
	// 문자열 선언 및 할당
	/*char greet01[] = "Hello!";*/

	// 포인터 변수 기반의 문자열 선언 및 할당
	/*char* greet02 = "Hello!";*/

	/*printf("%s %s", greet01, greet02);*/

	//char good[] = "Good!";
	//char* bad = "Bad!";

	/*printf("%c", good[0]);*/
	//good[0] = 'H';
	//printf("%c \n", good[0]);

	/*good = "New Good"; 배열 기반의 문자열 선언시에는
	문자열 내부에 있는 문자를 교체할 수는 있지만,
	문자열 자체를 새로운 문자열로 교체는 불가!
	*/

	/*printf("%c", bad[0]);*/
	//bad[0] = 'S';
	//printf("%c", bad[0]);

	/*
	포인터 변수를 통해서 문자열을 선언 및 할당한 경우에는
	배열을 통해서 문자열을 선언 및 할당한 것과 다르게 각
	문자의 값의 교체는 불가!!
	*/

	//bad = "New Bad";
	//printf("%s", bad);

	/*
	외관상 배열을 통한 문자열이나, 포인터변수를 통한 문자열
	모두 특정번째 인덱스에 해당하는 문자를 찾아오거나, 혹은
	문자열을 출력하는 것은 동일하게 작동!!

	특정번째 인덱스 값을 교체하는 것은 배열을 통한 문자열만 가능
	반대로 변수안에 할당된 문자열 자체를 교체하는 것은
	포인터변수를 통해서 선언했던 문자열만 가능!
	*/

	//int ch1, ch2;

	//ch1 = getchar(); // 문자단위로 값을 받아올 수 있는 함수
	//ch2 = getchar(); // enter

	//putchar(ch1); // 문자단위로 값을 출력하 수 있는 함수
	//putchar(ch2);

	//int ch;
	//while (1)
	//{
	//	ch = getchar();

	//	if (ch == EOF)
	//		break;
	//	putchar(ch);
	//}

	char ch[30];
	/* gets(ch); -> 구문법 */  
	fgets(ch, sizeof(ch), stdin); // 신문법
	puts(ch); // 자동 개행처리!!
	//scanf("%s", ch);
	//printf("%s", ch);
	printf("이 문자열은 다음 줄에서 출력됩니다!");

	return 0;
}