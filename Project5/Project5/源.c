#include"stdio.h"
#include"string.h"
#include"windows.h"
int main()
{
	char arr1[] = { "123345" };
	char arr2[] = { "######" };
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];//��arr2����ĵ�һ���±������ֵ��arr1����ĵ�һ���±����
		arr2[right] = arr1[right];//��arr2��������һ���±������ֵ��arr1��������һ���±����
		printf("%s\n", arr2);
		Sleep(1000);//˯��1000����
		system("cls");//��������������Windowsͷ�ļ���
		left++;
		right--;
	}
	return 0;
}