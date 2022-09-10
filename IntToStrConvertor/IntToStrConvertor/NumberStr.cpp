#include "NumberStr.h"

inline int NumberStr::GetDigitsCount()
{
    return digitsCount;
}

void NumberStr::SetDigitsCount(const int& _int)
{
    digitsCount = _int;
}

inline std::string& NumberStr::GetPresetStr()
{
    return *presetStr;
}

void NumberStr::SetPresetStr(std::string& _stringArray)
{
    presetStr = &_stringArray;
}

void NumberStr::SetAddableStr(std::string& _string)
{
    if (_string.size() != 0)
        addbleStr = _string;
   else
       hasAddableStr = false;
}

bool NumberStr::IsAddable()
{
    return hasAddableStr;
}
