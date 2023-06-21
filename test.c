#include <stdio.h>
void main()
{
	int a, b, mul;
	float div;
	printf("输入两个数字");
	scanf_s("%d%d",&a,&b);
	mul = a * b;
	div = a / b;
	printf("\n乘积=%d\n商=%f",mul,div);
}