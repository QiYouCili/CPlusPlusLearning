#include <iostream>
using namespace std;

//const double PI = 3.14;
//
//class Circle
//{
//
//public:
//
//	int m_r;
//
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//
//};
//
//
//
//int main()
//{
//	Circle cl;
//
//	cl.m_r = 10;
//
//	cout << "The girth of the circle is : " << cl.calculateZC() << endl;
//
//
//	system("pause");
//
//	return 0;
//}

class Student
{

public:

	string m_Name;

	int m_Id;

public:

	void showStudent()
	{
		cout << "name is : " << m_Name << "Id: " << m_Id << endl;
	}

	void setName(string name)
	{
		m_Name = name;
	}

	void setId(int id)
	{
		m_Id = id;
	}

};



int main()
{
	Student s1;
	//s1.m_Name = "zhangsan";
	s1.setName("zhangsan");
	//s1.m_Id = 1;

	s1.setId(1);

	s1.showStudent();


	system("pause");

	return 0;
}

