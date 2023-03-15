#include<iostream>
using namespace std;

int* func1()
{
	int * p = new int(10);
	return p;
}

void test01()
{
	int* p = func1();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	delete p;

	cout << *p << endl;
}

void test02()
{
	int * arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	delete[] arr;

}

int mainfffff()
{
	//test01();
	test02();
	system("pause");

	return 0;
}