#include <iostream>
using namespace std;


int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

void swap(int num1, int num2)
{
	cout << "Before swap :" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "After swap :" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
}
int main()
{
	int a = 10;
	int b = 20;

	swap(a, b);
	system("pause");

	return 0;
}