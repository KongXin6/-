#include"stdio.h"
int main()
{
	printf("input your achievement:");
	int a;
	int b=0;
	scanf_s("%d", &a);
	if (a == 100)
	{
		a = 90;
		b = a / 10;
	}
	switch (b)
	{
	case '9':
	case '8':
		printf("A");
		break;
	case '7':
	case '6':
		printf("B");
		break;
	default:
		printf("keep trying");
	}

	return 0;
}