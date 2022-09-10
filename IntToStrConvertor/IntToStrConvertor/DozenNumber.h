#pragma once

#include "NumberStr.h"
#include <string>
class DozenNumber : public NumberStr
{
private:
	const int currentDigitsCount = 2;
	std::string presetStr[10] = { "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Five", "Sixty", "Seventy", "Eighty", "Ninety" };

public:
	DozenNumber()
	{
		SetDigitsCount(currentDigitsCount);
		SetPresetStr(*presetStr);
	}
};