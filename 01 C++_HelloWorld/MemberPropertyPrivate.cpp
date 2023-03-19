#include <iostream>
using namespace std;


class Person
{
public:
	void setName(string name)
	{
		m_Name = name;
	}

	string getName()
	{
		return m_Name;
	}

	void setAge(int age)
	{
		if (age < 0 || age > 150)
		{
			m_Age = 0;
			cout << "Error" << endl;
			return;
		}
		m_Age = age;
	}
	int getAge()
	{
		//m_Age = 0;
		return m_Age;
	}

	void setLover(string lover)
	{
		m_Lover = lover;
	}

private:

	string m_Name;

	int m_Age;

	string m_Lover;
};


 
int maincdetbbg()
{
	Person p;

	p.setName("zhangsan");
	string res = p.getName();
	cout << res << endl;
	
	p.setAge(1000);
	
	p.setLover("Heihei");

	system("pause");

	return 0;
}

