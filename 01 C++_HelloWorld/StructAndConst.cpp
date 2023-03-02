#include <iostream>
using namespace std;



struct Student
{
	string name;
	int age;
	int score;
};

void printStudents(const Student *s)
{
	//s->age = 150;
	cout << "name: " << s->name << "age: " << s->age << "score: " << s->score;
}


int maindsdadd()
{
	struct Student s = { "zhangsan", 15, 70 };

	printStudents(&s);

	system("pause");

	return 0;
}