#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//char greet[] = "Hello, Guys!"; // 12���� ���ڷ� ������ 1���� ���ڿ�
	//printf("1���� �迭 greet�� ���̴� : %d", sizeof(greet));
	//// Hello, Guys!\0 (null ����)


	//char goodbye[50] = "Good BYE!";

	//char mind[30] = "I Love programming";
	//printf("%s \n", mind);

	//mind[7] = '\0';
	//printf("%s \n", mind);

	//mind[1] = '\0';
	//printf("%s \n", mind);

	//char str[50];

	//printf("���ڿ��� �Է��ϼ��� : ");
	//scanf("%s", str); // �ٸ� �ڷᱸ���� ���� ������ �Է¹��� ���� �޸� & x

	//printf("�Էµ� ���ڿ� : %s", str);

	char s[100];
	int i;

	printf("����ܾ� �Է� : ");
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