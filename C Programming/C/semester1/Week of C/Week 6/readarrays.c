#include <stdio.h>

int main()
{
    int A[5];
    A[0] = 1;
    A[1] = 2;
    A[2] = 3;
    A[3] = 4;
    A[4] = 5;

	int size = sizeof(A) / sizeof(A[0]);
    printf("size is %d", size);

	int i = 0;
	int sum = 0;
    int n = size;
	float avg;
	
	while(i < n)
	{
		sum = sum + A[i];
		i = i + 1;
	}
	
	avg = (float)sum / n;
	
	printf("%f", avg);
	
	return 0;
}