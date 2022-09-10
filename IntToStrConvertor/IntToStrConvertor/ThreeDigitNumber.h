#pragma once

#include "NumberStr.h"
#include <string>
class ThreeDigitNumber : public NumberStr
{
private:
	const int currentDigitsCount = 3;
	std::string addableStr = "hundred";

public:
	ThreeDigitNumber()
	{
		SetDigitsCount(currentDigitsCount);
		SetAddableStr(addableStr);
	}
};