#pragma once

#include <string>
class NumberStr
{
private:
	 int digitsCount;
	 std::string presetStr[10];

protected:
	void SetDigitsCount(int& value);
	void SetPresetStr(std::string& presetValue);

public:
	int GetDigitsCount();
	std::string& GetPresetStr();
};

