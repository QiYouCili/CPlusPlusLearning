#include <iostream>
using namespace std;

int main3424()
{
	/*int num = 0;
	
	while (num < 10) 
	{
		cout << num << endl;

		num++;

	}*/

	srand((unsigned int)time(NULL));

	int num = rand() % 100 + 1;
	
	int val = 0;

	
	while (num != val)
	{
		cin >> val;

		if (val > num)
		{
			cout << "Wrong, your guess is bigger" << endl;
		}
		else if (val < num)
		{
			cout << "Wrong, your guess is smaller" << endl;
		}
		else
		{
			cout << "Bingo" << endl;
		}
	}
	

	system("pause");

	return 0;
}