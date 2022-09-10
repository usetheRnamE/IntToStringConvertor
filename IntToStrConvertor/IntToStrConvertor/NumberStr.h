#pragma once
#include <iostream>
#include <string>

#include "Number.h"

#define OutRange -1
class NumberStr : public Number
{
private:
	 int digitsCount = OutRange;

	 std::string* presetStr = nullptr;
	 std::string addbleStr = NULL;

	 bool hasAddableStr = true;

protected:
	void SetDigitsCount(const int& _int);
	void SetPresetStr(std::string& _stringArray);
	void SetAddableStr(std::string& _string);

public:
	int GetDigitsCount();
	std::string& GetPresetStr();
	bool IsAddable();
};

