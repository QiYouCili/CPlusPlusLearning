#include<iostream>

using namespace std;

int main9() {

	float f1 = 3.1415926f;

	cout << "f1=" << f1 << endl;

	double d1 = 3.1415926;

	cout << "d1=" << d1 << endl;

	cout << "float memory space is" << sizeof(float) << endl;

	cout << "double memory space is" << sizeof(double) << endl;

	float f2 = 3e2;

	cout << "f2=" << f2 << endl;

	float f3 = 3e-2;

	cout << "f3=" << f3 << endl;

	system("pause");

	return 0;
}