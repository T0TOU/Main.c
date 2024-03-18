#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getsize(int* arr1, char* arr2)
{
	printf("sizeof(int* arr1) = %d\n", sizeof(arr1));//sizeof的单位是字节
	printf("sizeof(int* arr2) = %d\n", sizeof(arr2));//大小是一个指针的大小，是64位平台8*8个字节，所以是8
}
int getmax(int x, int y)
{
	return(x > y) ? x : y;//三木操作符，X>Y 成立吗？ 成立 x 不成立 y
}
int main()
{
	int arr1[10] = { 0 };
	char arr2[10] = { 0 };
	printf("sizeof(arr1) = %d\n",sizeof(arr1));
	printf("sizeof(arr2) = %d\n", sizeof(arr2));
	getsize(arr1, arr2);
	printf("%d\n", getmax(1, 5));
	struct student
	{
		char name[20];
		int age;			//结构体定义，数组不能在结构体内部初始化
		char ID[20];
	};
	struct student s1 = { "黎明",23,"320121100981211" };
	printf("name: %s age: %d ID: %s\n", s1.name, s1.age, s1.ID);
	struct student* LiMing = &s1;
	printf("name: %s age: %d ID: %s\n", (*LiMing).name, (*LiMing).age, (*LiMing).ID);
	printf("name: %s age: %d ID: %s\n", LiMing->name, LiMing->age, LiMing->ID);
	return 0;
}