#include<stdio.h>
int main()
{
	int month;
	printf("������һ���·�");
	scanf_s("%d",&month);
	if ( month >= 3 && month <= 5)
	{printf("%d�Ǵ���", month); }
	else if (month > 5 && month <= 9)
	{
		printf("%d���ļ�\n", month);
	}
	else if (month>9  && month<=11)
	{
		printf("%d���＾\n", month);
	}
	else if (month == 1 || month ==12 || month==2 )
	{
		printf("%d�Ƕ���\n", month);
	}
	else
		printf("%d�·ݲ�����\n", month);
	return 0;
	
}
#include<stdio.h>
int main()
{
	int i=2;
	printf("%d", ++i);
	return 0;
}
#include<stdio.h>
int main()
{
	int a;
	printf("������һ������");
	scanf_s("%d", &a);
	switch (a % 3) {
	case 0: printf("�ܱ�3����");   break;
	case 1: printf("������1");   break;
	case 2: printf("������2");   break;
	}
	return 0;
}