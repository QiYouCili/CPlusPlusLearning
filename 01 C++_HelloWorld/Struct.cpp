#include <iostream>
using namespace std;


struct Student
{
	string name;

	int age;

	int score;
}s3;



int maindadsadsad()
{
	Student s1;
	s1.name = "zhangsan";
	s1.age = 18;
	s1.score = 100;
	cout << "name:" << s1.name << endl;

	struct Student s2 = { "Lisi", 19, 80 };
	cout << "name:" << s2.name << endl;

	s3.name = "Wangwu";
	s3.age = 20;
	s3.score = 90;

	cout << "name:" << s3.name << endl;

	system("pause");

	return 0;
}
