#define MAX
#include<stdio.h>
int main()
{
	int a, b,c;
	printf("������a��b��ֵ");
	scanf_s("%d%d", &a, &b);
	c = MAX(a, b);
	printf("���ֵ��%d", c);
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b;
	printf("��������������ֵ");
	scanf_s("%d%d", &a, &b);
	printf("���ǵĲ���%d", (a > b) ? a - b : b - a);
	return 0;
}
#include<stdio.h>
int main()
{
	int a;
	printf("������һ������");
	scanf_s("%d", &a);
	if (a % 5)
		printf("������������ܱ�5����");
	else
		printf("����������ܱ�5����");
	return 0;
}