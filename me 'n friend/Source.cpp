#include<stdio.h>
int* max(int* a, int* b);
int main()
{
	int* num;
	num =  new int[4];
	for (int i = 0; i < 4; i++)
	{
		scanf_s("%d", &num[i]);
	}
	printf("\nMaximum Value : %d", *max(max(num, num++), max(num++, num++)));
	return 0;
}
int* max(int* a, int* b)
{
	if (*a >= *b)
	{
		return a;
	}
	else
	{
		return b;
	}
}