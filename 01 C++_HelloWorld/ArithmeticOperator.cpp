#include<iostream>
using namespace std;

int maineee() {

	int a1 = 10;
	int b1 = 3;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;
	cout << a1 % b1 << endl;
	
	int a = 10;
	++a;
	cout << "a = " << a << endl;

	int b = 10;
	b++;
	cout << "b = " << b << endl;

	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << "a2 = " << a2 << endl;
	cout << "b2 = " << b2 << endl;

	int a3 = 10;
	int b3 = a3++ * 10;
	cout << "a3 = " << a3 << endl;
	cout << "b3 = " << b3 << endl;

	system("pause");

	return 0;

}