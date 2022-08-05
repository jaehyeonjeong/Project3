#include <stdio.h>

struct S
{
	int i;
	int j;
};

const S s0 = { 0 };
const S s1 = { 8, 0 };
const S s2 = { 0, 0 };
const S s3 = { 8 };
int arr[10] = { 10 };
int arr1[3][2] = { {1,2}, {3,4}, {5,6} };

int main()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d,", arr1[i][j]);
		}
		printf("\n");
	}


	printf("%d\t", s1.i); printf("%d\n", s2.i);
	printf("%d\t", s1.j); printf("%d\n", s2.j);

	printf("%d\t", s3.i); printf("%d\n", s3.j);

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}