#include<iostream>
using namespace std;

int main2eqwe() {

	/*int score = 0;

	cout << "Please enter a score" << endl;

	cin >> score;

	cout << "The score you enter is:" << score << endl;

	if (score > 600)
	{

		cout << "Congratulations" << endl;

	}*/

	/*int score = 0;
	
	cout << "Please enter a score" << endl;

	cin >> score;

	cout << "The score you enter is:" << score << endl;

	if (score > 600) {
		
		cout << "First class university.";
	}
	else {
		cout << "Do not enter first class university" << endl;
	}*/

	/*int score = 0;

	cout << "Please enter a score" << endl;

	cin >> score;

	cout << "The score you enter is:" << score << endl;

	if (score > 600) 
	{
		cout << "First class university.";
		if (score > 700) 
		{
			cout << "Beijing University" << endl;
		}
		else if (score > 650)
		{
			cout << "Tsinghua university" << endl;
		}
		else
		{
			cout << "Renming university" << endl;
		}
	}

	else if (score > 500)
	{
		cout << "Second class university." << endl;
	}

	else if (score > 400) 
	{
		cout << "Third class university." << endl;
	}

	else 
	{
		cout << "Oh ,no" << endl;
	}*/

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	cout << "Please enter the weight of the pig A" << endl;
	cin >> num1;


	cout << "Please enter the weight of the pig B" << endl;
	cin >> num2;

	cout << "Please enter the weight of the pig C" << endl;
	cin >> num3;

	cout << "Pig A's weight is " << num1 << endl;
	cout << "Pig B's weight is " << num2 << endl;
	cout << "Pig C's weight is " << num3 << endl;

	if (num1 > num2)
	{
		if (num1 > num3)
		{
			cout << "Pig A is the heaviest." << endl;
		}
		else
		{
			cout << "Pig C is the heaviest." << endl;
		}
	}
	else
	{
		if (num2 > num3)
		{
			cout << "Pig B is the heaviest." << endl;
		}
		else
		{
			cout << "Pig C is the heaviest." << endl;
		}
	}

	system("pause");

	return 0;
}