#include<stdio.h>
int main()
{
	int a;
	printf("������a��ֵ");
	scanf_s("%d", &a);
	if (a == 0)
		printf("��������0");
	else if (a > 0)
		printf("������������");
	else
		printf("�������Ǹ���");
	return 0;
}