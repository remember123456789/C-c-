#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char garde;
//	scanf("%c", &garde);
//	printf("������ĵȼ�");
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
//		 default:printf("�������");
//			 
//	}
//	return 0;
//#include<stdio.h>
//int main()
//{
//	float score;
//	printf("��������ĳɼ�");
//	scanf("%f", &score);
//	if (score > 100)
//		printf("�������ɰ�");
//	else 
//	switch ((int)(score / 10))
//	{
//	case 10:
//	case 9: printf("����"); break;
//	case 8: printf("����"); break;
//	case 7: printf("����"); break;
//	case 6: printf("����"); break;
//	default:printf("������");
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a, b, max;
	printf("������a��b��ֵ");
	scanf("%d%d", &a,&b);
	(a > b) ? (max = a) : (max = b);
	printf("���ֵ��%d", max);
	return 0;
}