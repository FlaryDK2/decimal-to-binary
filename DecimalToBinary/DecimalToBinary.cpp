#include "stdafx.h"
#include <iostream>
#include <string>
#include "Converter.h"

using namespace std;

int main()
{
	int x;
	string result;

	cout << "Decimal to Binary calculator" << endl << endl;
	cout << "Please enter the number to convert." << endl;

	Converter converter;

	while (true)
	{
		cin >> x;
		result = converter.Convert(x);
		cout << "Result is: " << result << endl;
	}

	return 0;
}
