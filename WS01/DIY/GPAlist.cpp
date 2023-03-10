/***********************************************************************
// Workshop 1 p2: tester program
//
// File  GPAlist.cpp
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
#include <cstring>
#include <cstdio>
#include "GPAlist.h"
#include "File.h"
#include "GPA.h"
#include "UI.h"

using namespace std;
namespace sdds
{
    GPA studentInfo[100];
    bool loadGpa(const char *filename)
    {
        GPA gpaOfStudent;
        int mnum = 0;
        bool ok = true;
        if (openFile(filename))
        {
            while (ok && mnum < 100)
            {
                ok = readStudentName(gpaOfStudent.name) &&
                     readStudentNumber(&gpaOfStudent.stno) &&
                     readGpa(&gpaOfStudent.gpa);
                if (ok)
                {
                    studentInfo[mnum++] = gpaOfStudent;
                }
            }
            closeFile();
        }
        return mnum > 0;
    }
    void sortData(struct GPA *studentGpa, int maxNum)
    {
        struct GPA gpaStudent;
        for (int i = 0; i < maxNum - 1; i++)
        {
            if (studentGpa[i].stno != 0)
            {
                for (int j = 0; j < (maxNum - 1 - i); j++)
                {
                    if (studentGpa[j].stno > studentGpa[j + 1].stno)
                    {
                        gpaStudent = studentGpa[j];
                        studentGpa[j] = studentGpa[j + 1];
                        studentGpa[j + 1] = gpaStudent;
                    }
                }
            }
        }
    }
    bool gpaQuery(const char *filename)
    {
        bool isError = false;
        if (loadGpa(filename) == true)
        {
            isError = true;
            displayTheCommand(studentInfo);
        }
        return isError;
    }
}
