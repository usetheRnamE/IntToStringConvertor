#include "Convertor.h"
#include "LogTemplate.h"

#include <cmath>
#include <vector>
#include <string>

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
	Zero, One, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, 
	Eleven, Twelve, Thirteen, Fourteen, Fifteen, Sixteen, Seventeen, Eighteen, Nineteen,
	Twenty 
};

void Convertor::Convert(int& num)
{
	int digitSize = DigitSize(num);

	std::vector<int> numInVec;
	numInVec.reserve(digitSize);

	NumToVector(num, numInVec);

	std::vector<std::string> numberStr;
	numberStr.reserve(9);

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


	if (numberStr.size() == NULL) 
		numberStr[0] = "NaN";

}
