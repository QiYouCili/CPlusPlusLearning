#include <iostream>
using namespace std;

//int main()
//{
//	int a = 10;
//
//	int* p;
//
//	p = &a;
//
//	cout << &a << endl;
//
//	cout << p << endl;
//
//	*p = 1000;
//
//	cout << "a=" << a << endl;
//	cout << "*p=" << *p << endl;
//
//
//	system("pause");
//}

//int main()
//{
//	int a = 10;
//
//	int* p;
//
//	p = &a;
//
//	cout << "sizeof (int *) =" << sizeof(p) << endl;
//
//	system("pause");
//}

//int main()
//{
//	int* p = NULL;
//
//	*p = 100;
//
//	system("pause");
//
//	return 0;
//}

//int main()
//{
//	int* p = (int *)0x1100;
//
//	cout << *p << endl;
//
//	system("pause");
//
//	return 0;
//}

int mainadsadsad()
{
	int a = 10;
	int b = 20;

	const int* p = &a;
	
	p = &b;

	int* const p2 = &a;
	*p2 = 100;
	
	const int* const p3 = &a;
	




	cout << p << endl;

	system("pause");

	return 0;
}




