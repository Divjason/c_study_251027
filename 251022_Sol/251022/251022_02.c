#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	// 컴퓨터와 사람이 가위.바위.보 게임
	// 사람이 컴퓨터를 이기면 "human winner"
	// 가위 VS 보 && 바위 VS 가위 && 보 VS 바위

	//int num;
	//printf("input some positive number : ");
	//scanf("%d", &num);

	//switch (num)
	//{
	//	case 1:
	//	case 3:
	//	case 5:
	//		printf("odd \n");
	//		break;
	//	case 2:
	//	case 4:
	//	case 6:
	//		printf("even \n");
	//		break;
	//	default:
	//		printf("maybe bigger than 6 \n");
	//		break;
	//}

	//printf("switch state end.");

	// 사용자로부터 정수를 입력받아서 홀수인지, 짝수인지 판단하는 프로그램을 만들어보세요! (5분)
	// 나머지 연산자 => % 2 => 0 (짝수) // 1 (홀수)

	//int n;
	//printf("정수를 입력하세요 : ");
	//scanf("%d", &n);

	//if (n % 2 == 0)
	//	printf("입력한 정수 %d 는 짝수 입니다!", n);
	//else
	//	printf("입력한 정수 %d 는 홀수 입니다!", n);

	// 엑셀 테이블을 보시고,
	// 사용자가 본인의 나이를 입력하면 얼마의 지하철 요금을 지불해야 하는지를 확인할 수 있는
	// 프로그램 코드를 작성해주세요.

	//int age;
	//printf("당신의 나이를 입력하세요 : ");
	//scanf("%d", &age);

	//int fare;

	//if (age < 6 || age >= 65)
	//	fare = 0;
	//else if (age < 13)
	//	fare = 500;
	//else if (age < 19)
	//	fare = 900;
	//else
	//	fare = 1250;
	//	
	//if (fare == 0)
	//	printf("요금 : 무료");
	//else
	//	printf("요금 : %d", fare);

	// 지금 보여드릴 성적표는 홍길동 학생의 중간고사 성적표 입니다.
	// 해당 성적표 확인 후 평균점수를 구하고, 해당 평균 점수에 따라 학점을 출력하는
	// 프로그램을 만들어주세요. (switch 문을 활용해주세요!)
	// 학점 90점 이상이면 A, 80점 이상이면 B, 70점 이상이면 C,  60점 이상이면 D,
	// 60점 미만이면 F

	int ko = 88, en = 90, ma = 58, so = 81, sc = 72;

	// float : 4바이트 => 32비트
	// double : 8바이트 => 64비트 (*훨씬 더 많은 자리수의 메모리를 사용) = 정밀도 높다

	double avg = (ko + en + ma + so + sc) / 5.0;

	switch ((int)avg / 10) {
		case 9:
			printf("평균 : %0.2lf, 학점 : A", avg);
			break;
		case 8:
			printf("평균 : %0.2lf, 학점 : B", avg);
			break;
		case 7:
			printf("평균 : %0.2lf, 학점 : C", avg);
			break;
		case 6:
			printf("평균 : %0.2lf, 학점 : D", avg);
			break;
		default:
			printf("평균 : %0.2lf, 학점 : F", avg);
			break;
	}

	return 0;
}