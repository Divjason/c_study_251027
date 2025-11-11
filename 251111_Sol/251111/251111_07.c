#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clear_input(void)
{
	int ch;
	while ((ch = getchar()) != '\n' && ch != EOF){}
}

void menu(void)
{
	printf("==== ATM & 가계부 ====\n");
	printf("1) 입금\n");
	printf("2) 출금\n");
	printf("3) 이체 (입출금계좌 <-> 예금계좌)\n");
	printf("4) 거래내역 보기\n");
	printf("5) 잔액 보기\n");
	printf("0) 종료\n");
}

int main(void)
{
	// ATM을 활용해서 가계 입출금 관리
	// 입금, 출금, 종료, 거래내역, 잔액 => 기본기능 탑재
	// 입금 -> 출금 -> 거래내역 => 무한루프 반복문

	int choice;

	while (1)
	{
		menu();
		if (scanf("%d", &choice) != 1)
		{
			clear_input();
			continue;
		}
		clear_input();

		if (choice == 0)
		{
			printf("프로그램을 종료합니다. \n");
			break;
		}
		else if (choice == 1)
		{
			int acc, amount;
			char memo[32];
			printf("입금 계좌 선택 (1:입출금, 2:예금) : ");
			
			if (scanf("%d", &acc) != 1)
			{
				clear_input();
				continue;
			}
			clear_input();

			if (scanf("%d", &amount) != 1)
			{
				clear_input();
				continue;
			}
			clear_input();

			printf("메모(최대 31자, 엔터시 생략!) :");
			fgets(memo, sizeof(memo), stdin);
			memo[strcspn(memo, "\n")] = '\0';
		}
	}
	return 0;
}