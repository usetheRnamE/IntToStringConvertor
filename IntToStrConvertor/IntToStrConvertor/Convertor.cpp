#include "Convertor.h"
#include "LogTemplate.h"

#include <cmath>
#include <vector>
#include <string>

#include "NaturalNumber.h"
#include "DozenNumber.h"
#include "ThreeDigitNumber.h"

inline int DigitSize(int& num) 
{
	return static_cast<int>(log10(num) + 1);
}

void NumToVector(int& num, std::vector<int>& vec)
{
	int digitOrder = pow(10, vec.capacity() - 1), numToEmplace;
	int localDigitOrder;

	for (int i = vec.capacity() - 1; i >= 0; i--)
	{
		numToEmplace = num / digitOrder;

		localDigitOrder = vec.size();
		for (int j = 0; j < vec.size(); j++)
		{
			numToEmplace -= vec[j] * pow(10, localDigitOrder);
			localDigitOrder--;
		}
	
		vec.emplace_back(static_cast<int>(numToEmplace));

		digitOrder /= 10;
	}
}

enum Digits
{
	Zero, One, Two, Three, Four, Five, Six, Seven, Eight, Nine
};

template <typename T>
NumberStr DigitDefinde(T digitSize)
{
	if (digitSize < 10)
	{
		NaturalNumber naturalNumber;
		return naturalNumber;
	}
	else if (digitSize >= 10 && digitSize < 100)
	{
		DozenNumber dozenNumber;
		return dozenNumber;
	}
	else if (digitSize >= 100 && digitSize < 1000)
	{
		ThreeDigitNumber threeDigitNumber;
		return threeDigitNumber;
	}
}

std::string FinalString(NumberStr& currentNum, std::vector<int>& numInVec)
{
	#define sizeOfCurrentNum currentNum.GetDigitsCount()
	#define stringNumArr currentNum.GetPresetStr()

	std::string finalStr;
	for (int i = 0; i < sizeOfCurrentNum; i++)
	{
		switch (numInVec[i])
		{
		case Zero:
			if (i == Zero && sizeOfCurrentNum == One) // cuz we can have input like that: 012
				finalStr = stringNumArr[Zero];
			break;
		case One:
			finalStr = stringNumArr[One];
			break;
		case Two:
			finalStr = stringNumArr[Two];
			break;
		case Three:
			finalStr = stringNumArr[Three];
			break;
		case Four:
			finalStr = stringNumArr[Four];
			break;
		case Five:
			finalStr = stringNumArr[Five];
			break;
		case Six:
			finalStr = stringNumArr[Six];
			break;
		case Seven:
			finalStr = stringNumArr[Seven];
			break;
		case Eight:
			finalStr = stringNumArr[Eight];
			break;
		case Nine:
			finalStr = stringNumArr[Nine];
			break;
		default:
			finalStr = "NaN";
			break;
		}

		currentNum = DigitDefinde(sizeOfCurrentNum - 1);
	}
}

void Convertor::Convert(int& num)
{
	int digitSize = DigitSize(num);

	std::vector<int> numInVec;
	numInVec.reserve(digitSize);

	NumToVector(num, numInVec);

	std::vector<std::string> numberStr;
	numberStr.reserve(25);

	#pragma region BadCode

	//for (int i = 0; i < digitSize; i++)
	//{
	//	if (digitSize < 20)
	//	{
	//		switch (numInVec[i])
	//		{
	//		case Zero:
	//			numberStr[i] = "Zero";
	//			break;
	//		case One:
	//			numberStr[i] = "One";
	//			break;
	//		case Two:
	//			numberStr[i] = "Two";
	//			break;
	//		case Three:
	//			numberStr[i] = "Three";
	//			break;
	//		case Four:
	//			numberStr[i] = "Four";
	//			break;
	//		case Five:
	//			numberStr[i] = "Five";
	//			break;
	//		case Six:
	//			numberStr[i] = "Six";
	//			break;
	//		case Seven:
	//			numberStr[i] = "Seven";
	//			break;
	//		case Eight:
	//			numberStr[i] = "Eight";
	//			break;
	//		case Nine:
	//			numberStr[i] = "Nine";
	//			break;
	//		case Ten:
	//			numberStr[i] = "Ten";
	//			break;
	//		}
	//	}
	//	else if(digitSize >= 20 && digitSize < 30)
	//}
	#pragma endregion //Better to use polymorphism instead this shit

	NumberStr currentNum;
	currentNum = DigitDefinde(digitSize);

	

	if (numberStr.size() == NULL) 
		numberStr[0] = "NaN";

}

