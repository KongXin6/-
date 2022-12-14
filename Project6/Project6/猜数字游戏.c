#include"stdio.h"
#include"string.h"
#include"time.h"
#include"stdlib.h"

void menu()
{
	printf("**********************\n");
	printf("*********1.play*******\n");
	printf("*********0.exit*******\n");
	printf("**********************\n");
}
void game()
{
	int ret = rand() % 100 + 1;
	int guess;
	while (1)
	{
		printf("请猜一个数");
		scanf_s("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}

}

int main()

{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择是否进入游戏：");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();//进入game函数
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择：");
			break;
		}

	} while (input);
	return 0;
}
