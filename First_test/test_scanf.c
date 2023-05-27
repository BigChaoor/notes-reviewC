#include <stdio.h>
int test_scanf()
{
	int a = 0, b = 0;
	printf("请输入两个整数：\n");
	scanf("%d %d", &a, &b);
	printf("d% d%\n", a, b);
	return 0;	
}
