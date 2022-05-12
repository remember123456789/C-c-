#include<stdio.h>
int main()
{
	int no;
	printf("请输入一个整数");
	scanf_s("%d", &no);
	while (no > 0 && no!=1)
	{
		no--;
		printf("%d\n", no);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int no;
	printf("请输入一个整数");
	scanf_s("%d", &no);
	while (no-- >= 0)
		putchar('*');
	putchar('\n');
	return 0;
}
#include<stdio.h>
int main()
{
    int i, no;
    printf("请输入一个整数");
    scanf_s("%d",&no);
    for (i = 1; i < no; i++)
    {
        putchar('*');
        putchar('\n');
    }
    return 0;
}
#include<stdio.h>
int main()
{
	int i=100 ;
	printf("请输入一个100-300之间的整数");
	
	for (i; i < 300; i++)
	{
		if ((i % 4)==0) continue;
		printf("%d\n", i);
	}
	return 0;
}