#include<stdio.h>
int main()
{
	int month;
	printf("请输入一个月份");
	scanf_s("%d",&month);
	if ( month >= 3 && month <= 5)
	{printf("%d是春季", month); }
	else if (month > 5 && month <= 9)
	{
		printf("%d是夏季\n", month);
	}
	else if (month>9  && month<=11)
	{
		printf("%d是秋季\n", month);
	}
	else if (month == 1 || month ==12 || month==2 )
	{
		printf("%d是冬季\n", month);
	}
	else
		printf("%d月份不存在\n", month);
	return 0;
	
}