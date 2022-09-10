#pragma once

#include "NumberStr.h"
#include <string>
class NaturalNumber : public NumberStr
{
private:
	const int currentDigitsCount = 1;
    std::string presetStr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

public:
	NaturalNumber()
	{
		SetDigitsCount(currentDigitsCount);
		SetPresetStr(*presetStr);
	}
};

