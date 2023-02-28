#include <iostream>
using namespace std;

struct Student
{
	string name;

	int age;

	int score;
};



int mainadsadas()
{
	struct Student stuArray[8] =
	{
		{"Zhangsan", 18, 100},
		{"Lisi", 28, 99},
		{"Wangwu", 38, 66}
	};
	
	stuArray[2].name = "Zhaoliu";
	stuArray[2].age = 80;
	stuArray[2].score = 60;

	for (int i = 0; i < 3; i++)
	{
		cout << "name:" << stuArray[i].name << endl;
	}

	system("pause");

	return 0;
}