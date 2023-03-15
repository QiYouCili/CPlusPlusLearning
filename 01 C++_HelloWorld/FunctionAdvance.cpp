#include <iostream>
using namespace std;

//int func(int a, int b = 20, int c = 30)
//{
//	return a + b + c;
//}
//
//
//int main()
//{
//	cout << func(10) << endl;
//	
//	system("pause");
//
//	return 0;
//}

//void func(int a, int)
//{
//	cout << "This is function " << endl;
//}
//
//
//int main()
//{
//	func(10, 10);
//
//	system("pause");
//
//	return 0;
//}


void func()
{
	cout << "Func invoke " << endl;
}

void func(int a)
{
	cout << "Func (int a) invoke " << endl;
}
 
void func(double a)
{
	cout << "Func (double a) invoke " << endl;
}

void func(int a, double b)
{
	cout << "Func (int a, double b) invoke " << endl;
}

void func(double a, int b)
{
	cout << "Func (double a, int b) invoke " << endl;
}


int mainwwww()
{
	//func();
	//func(10);
	//func(3.14);
	//func(10, 3.14);
	func(3.14, 10);

	system("pause");

	return 0;
}

