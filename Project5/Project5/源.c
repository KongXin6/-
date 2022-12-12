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
		arr2[left] = arr1[left];//将arr2数组的第一个下标的数赋值给arr1数组的第一个下标的数
		arr2[right] = arr1[right];//将arr2数组的最后一个下标的数赋值给arr1数组的最后一个下标的数
		printf("%s\n", arr2);
		Sleep(1000);//睡眠1000毫秒
		system("cls");//清屏；（需引用Windows头文件）
		left++;
		right--;
	}
	return 0;
}