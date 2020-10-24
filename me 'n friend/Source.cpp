#include<stdio.h>
#include<math.h>
int* max(int* a, int* b);
int main()
{
	int* num;
	num =  new int[4];
	for (int i = 0; i < 4; i++)
	{
		scanf_s("%d", &num[i]);
	}
	printf("\nMaximum Value : %d\n", *max(max(num, num++), max(num++, num++)));
	int x = *max(max(num--, num--), max(num--, num));
	printf("%d\n", x);
	for (int j = 1; j <= abs(x); j++)
		{
			for (int k = 1; k <= j; k++)
			{
				printf("* ");
				for (int l = j; l <= k; l++)
				{
					printf("\n");
				}
			}
		}
	return 0;
}
int* max(int* a, int* b)
{
	if (*a > *b)
	{
		return a;
	}
	else
	{
		return b;
	}
}