#include<stdio.h>
int main()
{
	char c1, c2;
	printf("�������д");
	scanf_s("%c", &c1);
	c2 = c1 + 32;
	printf("���Сд%c\n", c2);
	return 0;
}
#include<stdio.h>
int main()
{
	int a,c;
	scanf_s("%d", &a);
	c = a / 1000;
	printf("��λc=%d", c);
	return 0;
//}
#include<stdio.h>
int main()
{
	printf("��� \n");
	return 0;
}
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("�����볤���εĳ��͸�");	
	scanf_s("%d%d", &a,&b);
	c = a * b;
	printf("�����ε����Ϊ=%d",c);
	return 0;
}