#include <iostream>
using namespace std;



struct Student
{
	string name;
	int age;
	int score;
};

void printStudents(Student s)
{
	cout << "name: " << s.name << "age: " << s.age << "score: " << s.score;
}



int main()
{
	struct Student s = { "zhangsan", 15, 70 };

	printStudents(s);

	system("pause");

	return 0;
}