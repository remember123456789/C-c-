#include<stdio.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] =  "abc" ;
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
//}
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);
	printf("max=%d", max);
	return 0;
}
int get_max(int x, int y)
{
	int z = 0;
	if (x > y)
		z = x;
	else
		z = y;
	return z;
}
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("������3������");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("���ֵ��%d", max(a, b, c));

}
int max(int x, int y, int z)
{
	int max = x;
	if (y > max) max = y;
	if (z > max) max = z;
	return max;
}
#include<stdio.h>
int main()
{
	char a;
	printf("������һ����ĸ");
	scanf_s("%c", &a);
	printf("%c", fun(a));

 
}
 fun(char a)
{
	if (a >= 'A' && a <= 'Z')
		a = a + 32;
	return a;	
}
#include<stdio.h>
int fun(int n)
{
	int i, p = 1;
	for (i = 1; i <= n; i++)
		p = p * (2 * i - 1);
	return p;
}
int main()
{
	int n;
	printf("������һ������");
	scanf_s("%d", &n);
	printf("��������%d", fun(n));
	return 0;
}
#include<stdio.h>
#define PI  3.14
#define o(r) PI*r*r
int main()
{
	double r, s;
	printf("������Բ�İ뾶");
	scanf_s("%lf", &r);
	s = o(r);
	printf("Բ�������%2.1f", s);
	return 0;
}