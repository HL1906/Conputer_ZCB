//#include <stdio.h>
//int main()
//{
//	int arr[30] = { 0 };
//	for (int i = 0; i < 30; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int j = 0; j < 30- 1; j++)
//	{
//		for (int i = 0; i < 30 - 1- j; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < 30; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//}