#include <iostream>
using namespace std;


int g_a = 10;
int g_b = 10;

const int c_g_a = 10;


int mainsssss()
{
	int a = 10;

	int b = 10;

	cout << (int)&a << endl;
	cout << (int)&b << endl;

	cout << (int)&g_a << endl;
	cout << (int)&g_b << endl;

	static int s_a = 10;

	static int s_b = 10;

	cout << (int)&s_a << endl;
	cout << (int)&s_b << endl;

	cout << (int)&"Hello world" << endl;

	cout << (int)&c_g_a << endl;

	const int c_l_a = 10;

	cout << (int)&c_l_a << endl;

	system("pause");

	return 0;
} 