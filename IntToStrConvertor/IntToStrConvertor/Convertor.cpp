#include "Convertor.h"
#include "LogTemplate.h"

#include <cmath>

inline int DigitSize(int& num) 
{
	return static_cast<int>(log10(num) + 1);
}

void Convertor::Convert(int& num)
{
	switch (DigitSize(num))
	{
	case 1: 
		lg::Log("One");
		break;
	default:
		lg::Log("NaN");
		break;
	}
}
