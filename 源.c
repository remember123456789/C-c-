#include<stdio.h>
int main()
{
	float a, b, c, t;
	printf("������3������");
	scanf_s("%f%f%f", &a, &b, &c);
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("%5.2f%5.2f%5.2f",a,b,c);
	return 0;
}
#include<stdio.h>
int main()
{		
	char ch;
	scanf_s("%c",&ch);
	ch = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
	printf("%c\n", ch);
	return 0;
}
#include<stdio.h>
int main()
{
	char ch;
	printf("������һ���ַ�");
	ch = getchar();
	if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
	printf("������ַ�����ĸ");
	else  if (ch >= '0' && ch <= '9')
	        printf("������ַ�������");
	      else  if (ch == ' ')
		        printf("���ַ��ǿո�");
	            else
		             printf("���ַ�������");
	return 0;
}
