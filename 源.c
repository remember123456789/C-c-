#include<stdio.h>
int main()
{
	float a, b, c, t;
	printf("请输入3个整数");
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
	printf("请输入一个字符");
	ch = getchar();
	if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
	printf("输入的字符是字母");
	else  if (ch >= '0' && ch <= '9')
	        printf("输入的字符是数字");
	      else  if (ch == ' ')
		        printf("该字符是空格");
	            else
		             printf("该字符不存在");
	return 0;
}
