/***********************************************************************
// Workshop 1 p2: tester program
//
// File  File.h
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
#ifndef SDDS_FILE_H
#define SDDS_FILE_H
namespace sdds{
    bool openFile(const char filename[]);
    void closeFile();
    bool readStudentName (char studentName[]);
    bool readStudentNumber (int *studentNumber);
    bool readGpa (double *gpa);
}
#endif