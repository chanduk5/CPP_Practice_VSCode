#include<iostream>
#include<string.h>
#include<cstring>

using namespace std;

class String
{
private:
	char* Name;
	int len;
public:
	String(const char* str = "\0");
	String operator()(const char* str);
	String operator+(String Obj);
	friend ostream& operator<<(ostream &out, String &obj);
};

String::String(const char* str)
{
	len = strlen(str);
	Name = new char[len + 1];
	strcpy_s(Name, len+1, str);
	cout << "constructor called\n";
}

String String::operator()(const char* str)
{
	cout << "(): overloading operator is called\n";
	len = strlen(str);
	Name = new char[len + 1];
	strcpy_s(Name, len + 1, str);
	return *this;
}

String String::operator+(String Obj)
{
	cout << "+: overloading operator is called\n";
	String s;
	int size = strlen(Obj.Name) + strlen(Name)+1;
	s.Name = new char[size];

	strcpy_s(s.Name, strlen(Name)+1, Name);
	strcat_s(s.Name, size, Obj.Name);
	s.len = strlen(s.Name);

	return String(s);
}

ostream& operator<<(ostream &out, String &obj)
{
	cout << "<<: overloading operator is called\n";
	out << "Name:" << obj.Name << endl;
	out << "Length" << obj.len << endl;
	return out;
}

int classexample3(void)
{
	String s1("Chandu");
	String s2, s3;
	const char* name = "Kurapati";
	s2(name);
	s3 = s1 + s2;
	cout << s3;
	return 0;
}