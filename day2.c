#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
//int main()
//{
//	char arr1[] = "welcome to bit";
//	char arr2[] = "**************";
//	int i = 0;
//	printf("%s\n", arr2);
//	Sleep(1000);
//	system("cls");
//	do
//	{
//		arr2[i] = arr1[i];
//		arr2[13 - i] = arr1[13 - i];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		i++;
//	} while (i <= 13 - i);
//	printf("%s\n", arr2);
//	//printf("%s\n", arr2);
//	//for (i = 0; i <= 13 - i; i++)
//	//{
//	//	arr2[i] = arr1[i];
//	//	arr2[13 - i] = arr1[13 - i];
//	//	printf("%s\n", arr2);
//	//}
//	return 0;
//}
int main()
{
	char arr1[] = "abc";
	char arr2[20] = "";
	int times = 3;
	
	

	while (times)
	{
		printf("ÇëÊäÈëÃÜÂë£¬ÄãÓÐ%d´Î»ú»á\n", times);
		scanf("%s", arr2);
		if (strcmp(arr1, arr2)==0)
		{
			printf("µÇÂ¼³É¹¦\n");
			break;
		}
		else printf("ÃÜÂë´íÎó\n");
		times--;
	}
	if (times == 0)
	{
		printf("µÇÂ¼Ê§°Ü");
	}
	return 0;
}