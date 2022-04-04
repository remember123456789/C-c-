#include<stdio.h>
int main()
{
	int a;
	printf("请输入a的值");
	scanf_s("%d", &a);
	if (a == 0)
		printf("该整数是0");
	else if (a > 0)
		printf("该整数是正的");
	else
		printf("该整数是负的");
	return 0;
}