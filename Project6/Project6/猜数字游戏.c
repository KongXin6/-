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
		printf("���һ����");
		scanf_s("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶���\n");
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
		printf("��ѡ���Ƿ������Ϸ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();//����game����
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}

	} while (input);
	return 0;
}
