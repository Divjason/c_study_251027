#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	// ��ǻ�Ϳ� ����� ����.����.�� ����
	// ����� ��ǻ�͸� �̱�� "human winner"
	// ���� VS �� && ���� VS ���� && �� VS ����

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

	// ����ڷκ��� ������ �Է¹޾Ƽ� Ȧ������, ¦������ �Ǵ��ϴ� ���α׷��� ��������! (5��)
	// ������ ������ => % 2 => 0 (¦��) // 1 (Ȧ��)

	//int n;
	//printf("������ �Է��ϼ��� : ");
	//scanf("%d", &n);

	//if (n % 2 == 0)
	//	printf("�Է��� ���� %d �� ¦�� �Դϴ�!", n);
	//else
	//	printf("�Է��� ���� %d �� Ȧ�� �Դϴ�!", n);

	// ���� ���̺��� ���ð�,
	// ����ڰ� ������ ���̸� �Է��ϸ� ���� ����ö ����� �����ؾ� �ϴ����� Ȯ���� �� �ִ�
	// ���α׷� �ڵ带 �ۼ����ּ���.

	//int age;
	//printf("����� ���̸� �Է��ϼ��� : ");
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
	//	printf("��� : ����");
	//else
	//	printf("��� : %d", fare);

	// ���� �����帱 ����ǥ�� ȫ�浿 �л��� �߰���� ����ǥ �Դϴ�.
	// �ش� ����ǥ Ȯ�� �� ��������� ���ϰ�, �ش� ��� ������ ���� ������ ����ϴ�
	// ���α׷��� ������ּ���. (switch ���� Ȱ�����ּ���!)
	// ���� 90�� �̻��̸� A, 80�� �̻��̸� B, 70�� �̻��̸� C,  60�� �̻��̸� D,
	// 60�� �̸��̸� F

	int ko = 88, en = 90, ma = 58, so = 81, sc = 72;

	// float : 4����Ʈ => 32��Ʈ
	// double : 8����Ʈ => 64��Ʈ (*�ξ� �� ���� �ڸ����� �޸𸮸� ���) = ���е� ����

	double avg = (ko + en + ma + so + sc) / 5.0;

	switch ((int)avg / 10) {
		case 9:
			printf("��� : %0.2lf, ���� : A", avg);
			break;
		case 8:
			printf("��� : %0.2lf, ���� : B", avg);
			break;
		case 7:
			printf("��� : %0.2lf, ���� : C", avg);
			break;
		case 6:
			printf("��� : %0.2lf, ���� : D", avg);
			break;
		default:
			printf("��� : %0.2lf, ���� : F", avg);
			break;
	}

	return 0;
}