#include "Number.h"

int* Number::GetInt()
{
    return &givenNumber;
}

void Number::SetInt(int& _int)
{
    givenNumber = _int;
}

std::string Number::GetStr()
{
    return convertedNumber;
}

void Number::SetStr(std::string& str)
{
    convertedNumber = str;
}
