#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	// malloc() : Memory Allocation
	// malloc > void
	// 입력자료형 타입 정의
	// int *numPtr = (int *) malloc(sizeof(int))
	// free(pointer)

	int *iptr = (int *)malloc(sizeof(int) * 5);
	double *dptr = (double*)malloc(sizeof(double) * 3);
	int i;

	for (i = 0; i < 5; i++)
	{
		iptr[i] = 10 * (i + 1);
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d \n", iptr[i]);
	}

	dptr[0] = 3.14;
	dptr[1] = 4.13;
	dptr[2] = 1.43;

	printf("%.2f %.2f %.2f \n", dptr[0], dptr[1], dptr[2]);

	if (iptr != NULL) free(iptr);
	if (dptr != NULL) free(dptr);

	return 0;
}