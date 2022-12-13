#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"



int main() 
{
	int a=0;
	int b=0;
	int c=0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int d = a;
		a = b;
		b = d;
	}
	 if (a < c)
	{
		int d = a;
		a = c;
		c = d;
	}
	else (b < c);
	{
		int d = b;
		b = c;
		c = d;
	}
	printf("%d%d%d", a, b, c);
	return 0;
}