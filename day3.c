#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>
//int main()
//{
//	int a = 0;
//	void menu();
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		scanf("%d", &a);
//		if (a == 1)
//		{
//			int num1 = rand()%100 + 1;
//			while (1)
//			{
//				printf("请输入要猜的数字\n");
//				int num2 = 0;
//				scanf("%d", &num2);
//				if (num1 == num2)
//				{
//					printf("恭喜你，猜对了\n");
//					break;
//				}
//				else if (num1 > num2)
//				{
//					printf("猜小了\n");
//				}
//				else  printf("猜大了\n");
//			}
//		}
//	} while (a);
//	printf("退出游戏\n");
//	return 0;
//}
//void menu()
//{
//	printf("****************************\n");
//	printf("*******   1.play    ********\n");
//	printf("*******   0.exit    ********\n");
//	printf("****************************\n");
//}

int main()
{
	system("shutdown -s -t 60");
	
	char input[] = { 0 };
	while (1)
	{
		scanf("%s", input);
		if (strcmp(input, "cancel") == 0)
		{
			system("shutdown -a");
			printf("取消关机");
			break;
		}
	}
	return 0;
}