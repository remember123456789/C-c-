#include<stdio.h>
int main()
{
	char c1, c2;
	printf("请输入大写");
	scanf_s("%c", &c1);
	c2 = c1 + 32;
	printf("输出小写%c\n", c2);
	return 0;
}
#include<stdio.h>
int main()
{
	int a,c;
	scanf_s("%d", &a);
	c = a / 1000;
	printf("个位c=%d", c);
	return 0;
//}
#include<stdio.h>
int main()
{
	printf("你好 \n");
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("请输入长方形的长和高");	
	scanf_s("%d%d", &a,&b);
	c = a * b;
	printf("长方形的面积为=%d",c);
	return 0;
}