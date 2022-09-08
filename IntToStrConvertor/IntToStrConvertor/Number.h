
#pragma once
#include <iostream>;

class Console;

class Number
{
friend class Console;

private:
	int givenNumber;
	std::string convertedNumber;

public:
	int* GetInt();
	void SetInt(int& INT);

	std::string GetStr();
	void SetStr(std::string& str);
};

