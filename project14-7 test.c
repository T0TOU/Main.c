 #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int sz = sizeof(arr) / sizeof (arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (arr[i] == 11)
		{
			printf("找到了：arr[%d]", i);
			break;
		}
	}
	if (i == sz)
	{
		printf("找不到\n");
	}
	//折半查找算法------------------------------------------------------------------------------------------------------------
	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
	int How = 0;//0 1 2 3 4 5 6 7 8 9
	scanf("%d", &How);//"1,2,3,4,5,6 /0"
	int left = 0;    //  0 1 2 3 4 5 6         7-1=6 NO  --  6-1=5  Yes
	int right = sizeof(arr1) / sizeof(arr1[0]) - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr1[mid] > How)
			right = mid - 1;
		else if (arr1[mid]< How)
			left = mid + 1;
		else
		{
			printf("arr[%d]\n", mid);
			break;
		}
	}
	if (left > right)
		printf("NO\n");
	return 0;
}
