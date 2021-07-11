#pragma once
#include <string>
class Person
{
private: 
	std::string firstname;
	std::string lastname;
	int arbitrarynumber;
	static const int size_Of_Array = 16;
public:
	Person(std::string first,
		std::string last,
		int arbitrary);
	~Person();
	std::string GetName() const;
	int GetNumber() const {return arbitrarynumber;}
	void SetNumber(int number) {arbitrarynumber = number;}
};
