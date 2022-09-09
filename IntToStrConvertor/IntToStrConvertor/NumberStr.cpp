#include "NumberStr.h"

int NumberStr::GetDigitsCount()
{
    return digitsCount;
}

void NumberStr::SetDigitsCount(int& value)
{
    digitsCount = value;
}

std::string& NumberStr::GetPresetStr()
{
    return *presetStr;
}

void NumberStr::SetPresetStr(std::string& presetValue)
{
    *presetStr = presetValue;
}
