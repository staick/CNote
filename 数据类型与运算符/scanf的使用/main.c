#define _CRT_SECURE_NO_WARNINGS	//���scanf����
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);	//һ��Ҫ�ڱ���ǰ����&����
	printf("a=%d\n", a + b);
}