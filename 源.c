#define aqrt
#include<stdio.h>
int main()
{
    double a, b, c, s=0, area;
    a = 3.67;
    b = 5.43;
    c = 6.21;
    s = (a + b + c) / 2;
    area=aqrt(s*(s-a)*(s-b)*(s-c));
    printf("%f\t%f\t%f\t", a, b, c);
    printf("area=%f\n", area);
    return 0;
}
#include<stdio.h>
int main()
{
	int a;
	printf("����һ������");
	scanf_s("%d",&a);
	if (a%2)
		printf("a������");
	else
		printf("a��ż��");
	return 0;
}