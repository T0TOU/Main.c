#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Find(int arr1[], int sz)
{	
	int i = 0;
	int j = 0;
	for (i = 0; i < sz; i++)
	{
		for (j = 0; j < sz; j++)
		{		
			if (arr1[i] == arr1[j] && i != j)
			{
				break;
			}	
		}
		if (j >= sz)
		{
			return arr1[i];
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4 };
	int sz = sizeof(arr) / sizeof(arr[1]);
	printf("%d ", Find(arr,sz));
	return 0;
}