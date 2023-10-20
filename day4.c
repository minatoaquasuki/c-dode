#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int judge(int x)
//{
//	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
//		return 1;
//	else return 0;
//}
//int main()
//{
//
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (judge(year))
//		{
//			printf("%d\n", year);
//		}
//	}
//	return 0;
//}
// 
//int binary_seach(int x[],int n,int d)
//{
//	int LEFT = 0, RIGHT = d - 1;
//	int mid = 0;
//	while (LEFT <= RIGHT)
//	{
//		mid = (LEFT + RIGHT) / 2;
//		if (x[mid] == n)
//			return mid+1;
//		else if (x[mid] < n)
//			LEFT = mid + 1;
//		else RIGHT = mid - 1;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_seach(arr, k,sz);
//	printf("%d", ret);
//	return 0;
//}

//void test(int *p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	test(&num);
//	return 0;
//}