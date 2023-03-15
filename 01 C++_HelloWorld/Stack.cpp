#include <iostream>
using namespace std;

//int * func()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int * p =func();
//
//	cout << *p << endl;
//	cout << *p << endl;
//	
//	system("pause");
//
//	return 0;
//}


int* func()
{
	int * p = new int(10);
	return p;
}

int mainssss()
{
	int* p = func();
	cout << *p << endl;

	system("pause");

	return 0;
}