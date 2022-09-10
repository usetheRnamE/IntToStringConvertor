#pragma once

#include <iostream>
#include <string>
#include <optional>
class NumberStr
{
private:
	 int digitsCount = -1;

	 std::string* presetStr = nullptr;
	 std::string addbleStr = nullptr;

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

