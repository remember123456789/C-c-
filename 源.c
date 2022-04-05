#define MAX
#include<stdio.h>
int main()
{
	int a, b,c;
	printf("请输入a和b的值");
	scanf_s("%d%d", &a, &b);
	c = MAX(a, b);
	printf("最大值是%d", c);
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b;
	printf("请输入两个数的值");
	scanf_s("%d%d", &a, &b);
	printf("他们的差是%d", (a > b) ? a - b : b - a);
	return 0;
}
#include<stdio.h>
int main()
{
	int a;
	printf("请输入一个整数");
	scanf_s("%d", &a);
	if (a % 5)
		printf("输入的整数不能被5整除");
	else
		printf("输入的整数能被5整除");
	return 0;
}