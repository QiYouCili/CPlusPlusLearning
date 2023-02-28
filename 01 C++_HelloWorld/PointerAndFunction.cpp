#include <iostream>
using namespace std;


//void swap(int* p1, int* p2)
//{
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	swap(&a, &b);
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	
//	system("pause");
//
//	return 0;
//}

void bubbleSort(int * arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0;j < len - i - 1;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printArray(int* arr, int len)
{
	for (int i = 0;i < len;i++)
	{
		cout << arr[i] << endl;
	}
}




int mainaadasdasd()
{
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

	int len = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr, len);
	printArray(arr, len);

	system("pause");

	return 0;
}
