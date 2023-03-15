#include <iostream>
using namespace std;

struct Hero
{
	string name;
	int age;
	string gender;
};

struct Hero heroArray[5] = {
	{"Liubei", 23, "Male"},
	{"Guanyu", 22, "Male"},
	{"Zhangfei", 20, "Male"},
	{"Zhaoyun", 21, "Male"},
	{"Diaochan", 19, "Female"}
};

void sortByAge(struct Hero heroArray[])
{
	for (int i = 0; i < 5 - 1; i++)
	{
		for (int j = 0; j < 5 - 1 - i; j++)
		{
			if (heroArray[j].age > heroArray[j+1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}

void printInfo(struct Hero heroArray[])
{
	for (int i = 0; i < 5; i++)
	{
		cout << heroArray[i].name << heroArray[i].age << heroArray[i].gender << endl;
	}
}


int mainaaaaa()
{
	sortByAge(heroArray);

	printInfo(heroArray);
	

	system("pause");

	return 0;
}