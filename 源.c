#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char garde;
//	scanf("%c", &garde);
//	printf("输入你的等级");
//	switch (garde)
//	{    
//	     case 'a ':
//	     case 'A': printf("85~100\n"); break;
//		 case 'a' :
//		 case 'B': printf("70~84\n"); break;
//		 case 'c' :
//		 case 'C': printf("60~69\n"); break;
//		 case 'd' :
//		 case 'D': printf("<60\n");  break;
//		 default:printf("输入错误");
//			 
//	}
//	return 0;
//#include<stdio.h>
//int main()
//{
//	float score;
//	printf("请输入你的成绩");
//	scanf("%f", &score);
//	if (score > 100)
//		printf("你是神仙吧");
//	else 
//	switch ((int)(score / 10))
//	{
//	case 10:
//	case 9: printf("优秀"); break;
//	case 8: printf("优秀"); break;
//	case 7: printf("良好"); break;
//	case 6: printf("及格"); break;
//	default:printf("不及格");
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a, b, max;
	printf("请输入a和b的值");
	scanf("%d%d", &a,&b);
	(a > b) ? (max = a) : (max = b);
	printf("最大值是%d", max);
	return 0;
}