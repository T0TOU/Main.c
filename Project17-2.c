#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getsize(int* arr1, char* arr2)
{
	printf("sizeof(int* arr1) = %d\n", sizeof(arr1));//sizeof�ĵ�λ���ֽ�
	printf("sizeof(int* arr2) = %d\n", sizeof(arr2));//��С��һ��ָ��Ĵ�С����64λƽ̨8*8���ֽڣ�������8
}
int getmax(int x, int y)
{
	return(x > y) ? x : y;//��ľ��������X>Y ������ ���� x ������ y
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
		int age;			//�ṹ�嶨�壬���鲻���ڽṹ���ڲ���ʼ��
		char ID[20];
	};
	struct student s1 = { "����",23,"320121100981211" };
	printf("name: %s age: %d ID: %s\n", s1.name, s1.age, s1.ID);
	struct student* LiMing = &s1;
	printf("name: %s age: %d ID: %s\n", (*LiMing).name, (*LiMing).age, (*LiMing).ID);
	printf("name: %s age: %d ID: %s\n", LiMing->name, LiMing->age, LiMing->ID);
	return 0;
}