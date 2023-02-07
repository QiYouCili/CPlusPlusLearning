#include <iostream>
using namespace std;

int main346543()
{
	cout << "Please rate the movies." << endl;
	int score = 0;
	cin >> score;
	cout << "The score you gave is: " << score << endl;

	switch (score)
	{
	case 10:
		cout << "Classic movie" << endl;
		break;
	case 9:
		cout << "Classic movie" << endl;
		break;
	case 8:
		cout << "Good movie" << endl;
		break;
	case 7:
		cout << "Good movie" << endl;
		break;
	case 6:
		cout << "Average movie" << endl;
		break;
	case 5:
		cout << "Average movie" << endl;
		break;
	default:
		cout << "Sucks" << endl;

	}


	system("pause");

	return 0;
}