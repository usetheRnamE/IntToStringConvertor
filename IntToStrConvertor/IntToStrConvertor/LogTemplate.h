#pragma once
#include <iostream>

namespace lg
{
	template <typename T>
	inline void Log(T val)
	{
		std::cout << val << "\n";
	}
}