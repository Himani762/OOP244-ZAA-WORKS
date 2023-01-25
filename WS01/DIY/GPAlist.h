/***********************************************************************
// Workshop 1 p2: tester program
//
// File  GPAlist.h
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
#ifndef SDDS_GPAlist_H
#define SDDS_GPAlist_H
#include "GPA.h"
#include "File.h"
namespace sdds {
    bool loadGpa(const char* filename);
    void sortData(struct GPA *studentGpa, int maxNum);
    bool gpaQuery(const char* filename);
}
#endif
