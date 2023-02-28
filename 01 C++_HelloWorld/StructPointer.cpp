#include <iostream>
using namespace std;

//struct Student
//{
//	string name;
//
//	int age;
//
//	int score;
//};
//
//struct Teacher
//{
//	int id;
//
//	string name;
//	
//	int age;
//
//	struct Student stu;
//
//};
//
//
//int maindsadasd()
//{
//	Teacher t;
//	t.id = 10000;
//	t.name = "Wang";
//	t.age = 50;
//	t.stu.name = "XiaoWang";
//	t.stu.age = 20;
//	t.stu.score = 60;
//
//	cout << "Teacher's name is " << t.name << endl;
//
//
//	system("pause");
//
//	return 0;
//}


struct Student
{
	string name;
	int age;
	int score;
};


void printStudent1(Student s)
{
	s.age = 100;
	cout <<" In sub funxtion1, name is " << s.name << " age: " << s.age << " score : " << s.score << endl;
}

void printStudent2(Student *p)
{
	p->age = 200;
	cout << " In sub funxtion2, name is " << p->name<< " age: " << p->age << " score : " << p->score << endl;
}

int maindadsa()
{
	Student s;
	s.name = "Zhangsan";
	s.age = 20;
	s.score = 85;

	printStudent1(s);
	printStudent2(&s);

	cout << "In main function, name is " << s.name << " age: " << s.age << "score: " << s.score << endl;


	system("pause");

	return 0;
}