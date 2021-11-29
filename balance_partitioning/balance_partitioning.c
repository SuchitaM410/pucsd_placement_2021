#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


long calc_sum(int *arr, int first, int last) 
{
    int i = 0;
	long sum = 0;

	for (i = first ; i <= last; i++)
	{
		sum += arr[i];
	}

	return sum;
}

int balance_partitioning(int *arr, int n)
{
	long k, left_sum = 0, right_sum = 0,difference, l = 0, r = 0, max = INT_MAX;
	int mid = 0;
	for (k = 1; k< n - 1; k++)
	{
		left_sum = calc_sum(arr, 0, k - 1);
		right_sum = calc_sum(arr, k + 1, n - 1);

		difference = abs(left_sum - right_sum);

		if (difference < max)
		{
			mid = k;
			max = difference;
			l = left_sum;
			r = right_sum;                 
		}
	}
    return mid;
}

void main()
{
	printf("Enter the value of N :");
	int i,length = 0;
	scanf("%d", &length);           

	int sequence[length];
    for (i = 0; i < length; i++)
	{
		sequence[i] = (2 * i) + 4;
	}
    int index = balance_partitioning(sequence, length);
    printf("\nPartitioning Index : %d", index);
}