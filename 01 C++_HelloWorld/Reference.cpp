#include<iostream>
using namespace std;


//int main()
//{
//	int a = 10;
//	int& b = a;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	b = 100;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	system("pause");
//
//	return 0;
//}


//void mySwap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//void mySwap02(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void mySwap03(int & a, int & b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//
//int main() 
//{
//	int a = 10;
//	int b = 20;
//
//	//mySwap01(a, b); 
//	//mySwap02(&a, &b);
//	mySwap03(a, b);
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	system("pause");
//
//	return 0;
//}

//int& test01()
//{
//	int a = 10;
//	return a;
//}
//
//int& test02()
//{
//	static int a = 10;
//	return a;
//}
//
//int main()
//{
//	/*int& ref = test01();
//
//	cout << "ref = " << ref << endl;
//	cout << "ref = " << ref << endl;*/
//
//	int& ref2 = test02();
//
//	cout << "ref2 = " << ref2 << endl;
//	test02() = 1000;
//
//	cout << "ref2 = " << ref2 << endl;
//	
//	system("pause");
//
//	return 0;
//}

void showValue(const int& val)
{
	//val = 1000;
	cout << "val = " << val << endl;
}


int mainaaaaasdsa()
{
	int a = 100;
	//const int& ref = 10;
	showValue(a);
	cout << "a = " << a << endl;


	system("pause");

	return 0;
}
