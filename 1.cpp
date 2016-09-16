/*************************************************************************
    > File Name: 1.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年09月16日 星期五 19时14分32秒
 ************************************************************************/
/******************************TEST***************************/
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

class Student
{
	public:
		void setName(string _name);
		string getName();
		void setGedent(string _gedent);
		string getGedent();
		int setAge(int _age);
		int getAge();
	private:
		string m_strName;
		string m_strGedent;
		int m_iAge;
};
void Student::setName(string _name)
{
	m_strName = _name;
}
string Student::getName()
{
	return m_strName;
}
void Student::setGedent(string _gedent)
{
	m_strGedent = _gedent;
}
string Student::getGedent()
{
	return m_strGedent;
}
int Student::setAge(int _age)
{
	m_iAge= _age;
}
int Student::getAge()
{
	return m_iAge;
}


int main(void)
{
	Student *p =new Student;
	p->setName("孙子");
	p->setGedent("男");
	p->setAge(23);
	cout<<p-> getName() <<" "<<p->getGedent()<<" "<<p->getAge()<<endl;
}
