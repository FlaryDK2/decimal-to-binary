#include "stdafx.h"
#include "Converter.h"
#include <iostream>

std::string Converter::Convert(int n)
{
	std::string r;
	while (n != 0) { r = (n % 2 == 0 ? "0" : "1") + r; n /= 2; }
	return r;
}
