#include <iostream>
using namespace std;

int main11111111()
{
	int arr[5];
	/*arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;*/
	

	int arr2[5] = { 10, 20, 30, 40, 50 };

	/*for (int i = 0;i < 5;i++)
	{
		cout << arr2[i] << endl;
	}*/

	int arr3[] = { 90, 80,70,60,50,40,30,20,10 };

	/*for (int i = 0;i < 9;i++)
	{
		cout << arr3[i] << endl;
	}*/

	cout << sizeof(arr3) << endl;
	cout << (int)arr3 << endl;
	cout << (int)&arr3[0] << endl;


	system("pause");

	return 0;
}