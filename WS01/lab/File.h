/***********************************************************************
// Workshop 1 p1: tester program
//
// File  File.h
// Version 1.0
// Date JAN 19 winter 2023
// Author Duc Minh Pham
// ID: 103055224
// Email: dpham34@myseneca.ca
// Revision History
// -----------------------------------------------------------
// Name Duc Minh Pham    Date Jan 19 2023   Reason update files
/////////////////////////////////////////////////////////////////
***********************************************************************/

#ifndef SDDS_FILE_H // replace NAMESPACE and HEADERFILENAME with relevant names
#define SDDS_FILE_H

// Your header file content goes here
namespace sdds
{
    bool openFile(const char filename[]);
    void closeFile();
    bool readTitle(char title[]);
    bool readYear(int *year);
    bool readMovieRating(char rating[]);
    bool readDuration(int *duration);
    bool readGenres(char genres[][11]);
    bool readConsumerRating(float *rating);
}
#endif