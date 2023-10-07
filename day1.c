#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int n= 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) 
//	{
//		sum = sum * i;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int tmp1 = 0;
//	int tmp2 = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		tmp2 = 1;
//		for (int j = 1; j <= i; j++)
//		{
//			tmp2 = tmp2 * j;
//		}
//		tmp1 = tmp1 + tmp2;
//	}
//	printf("%d", tmp1);
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 2,6,8,9,10 };
//	int LEFT = 0;
//	int RIGHT = sizeof(arr) / sizeof(arr[0]) - 1;
//	int n = 0;
//	scanf("%d", &n);
//	while (LEFT <= RIGHT)
//	{
//		int mid = (LEFT + RIGHT) / 2;
//		if (n < arr[mid])
//			RIGHT = mid - 1;
//		else if (n > arr[mid])
//			LEFT = mid + 1;
//		else
//		{
//			printf("找到了，下标是%d", mid);
//			break;
//		}
//	}
//	if (RIGHT < LEFT)
//	{
//		printf("找不到此数值!");
//	}
//	return 0;
//}