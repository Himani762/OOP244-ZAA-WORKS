/***********************************************************************
// Workshop 1 p2: tester program
//
// File  File.cpp
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
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <cstdio>
#include <fstream>
#include "File.h"
using namespace std;
namespace sdds
{
    FILE *fptr;
    // opens the data file and returns true is successful
    bool openFile(const char filename[])
    {
        fptr = fopen(filename, "r");
        return fptr != NULL;
    }

    // closes the data file
    void closeFile()
    {
        if (fptr)
            fclose(fptr);
    }
    bool readStudentName (char studentName[])
    {
        return fscanf(fptr, "%[^,],", studentName) == 1;
    }
    bool readStudentNumber (int *studentNumber)
    {
        return fscanf(fptr, "%d,", studentNumber) == 1;
    }
    bool readGpa (double *gpa)
    {
        return fscanf(fptr, "%lf\n", gpa) == 1;
    }
}
