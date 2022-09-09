#pragma once
#include "NumberStr.h"


#include <string>
class NaturalNumber : public NumberStr
{
private:
	const int currentDigitsCount = 2;
    const std::string presetStr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

	NaturalNumber()
	{
		SetDigitsCount(currentDigitsCount);

	}

//public:
//	int GetDigitsCount();
//	const std::string& GetPresetStr();
};

