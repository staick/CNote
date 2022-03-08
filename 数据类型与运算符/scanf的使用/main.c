#define _CRT_SECURE_NO_WARNINGS	//解决scanf报错
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);	//一定要在变量前加入&符号
	printf("a=%d\n", a + b);
}