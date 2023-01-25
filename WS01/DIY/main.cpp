
/***********************************************************************
// Workshop 1 p2: tester program
//
// File  main.cpp
// Version 1.0
// Date Jan 24 winter 2023
// Author: Duc Minh Pham
// ID: 103055224
// Email: dpham34@myseneca.ca
// Revision History
// -----------------------------------------------------------
// Name Duc Minh Pham   Date Jan 24 winter 2023    Reason
/////////////////////////////////////////////////////////////////
***********************************************************************/
#include <iostream>
#include "GPAlist.h"
using namespace sdds;
int main()
{
	if (gpaQuery("std.csv"))
	{
		std::cout << "This should have failed!" << std::endl;
	}
	else
	{
		std::cout << "failed!, this is the correct exectution" << std::endl;
	}
	if (!gpaQuery("students.csv"))
	{
		std::cout << "This should have worked, fix the problem!" << std::endl;
	}
	std::cout << "Goodbye!" << std::endl;
	return 0;
}