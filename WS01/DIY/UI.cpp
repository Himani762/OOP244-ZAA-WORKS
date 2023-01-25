/***********************************************************************
// Workshop 1 p2: tester program
//
// File  UI.cpp
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
#include "UI.h"
#include "GPA.h"
#include "GPAlist.h"
using namespace std;
namespace sdds
{
    void displayTheCommand(struct GPA gpaStudent[])
    {
        char command;
        double gpaNum;
        char exitCommand;
        int i, maxCount, count;
        bool keepDoing;
        cout << "Enter GPA query..." << endl;
        do
        {
            keepDoing = true;
            count = 1;
            maxCount = 100;
            cout << "? ";
            cin >> command;
            if (command == '!')
            {
                cout << "Exit the program? (Y)es/(N)o: ";
                cin >> exitCommand;
                if (exitCommand == 'y' || exitCommand == 'Y')
                {
                    keepDoing = false;
                }
            }
            else
            {
                if (command == '<')
                {
                    cin >> gpaNum;
                    for (i = 0; i < maxCount; i++)
                    {
                        if (gpaStudent[i].gpa < gpaNum && gpaStudent[i].stno != 0)
                        {
                            printf("[%d] %d: %.1lf (%s)\n", count++, gpaStudent[i].stno,
                                   gpaStudent[i].gpa, gpaStudent[i].name);
                        }
                    }
                }
                else if (command == '>')
                {
                    cin >> gpaNum;
                    for (i = 0; i < maxCount; i++)
                    {
                        if (gpaStudent[i].gpa > gpaNum)
                        {
                            printf("[%d] %d: %.1lf (%s)\n", count++,
                                   gpaStudent[i].stno, gpaStudent[i].gpa, gpaStudent[i].name);
                        }
                    }
                }
                else if (command == '~')
                {
                    cin >> gpaNum;
                    for (i = 0; i < maxCount; i++)
                    {
                        if (gpaStudent[i].gpa <= (gpaNum + 0.05) && gpaStudent[i].gpa >= (gpaNum - 0.05))
                        {
                            printf("[%d] %d: %.1lf (%s)\n", count++, gpaStudent[i].stno,
                                   gpaStudent[i].gpa, gpaStudent[i].name);
                        }
                    }
                }
                else
                {
                    cin >> gpaNum;
                    cout << "Syntax error: ? [Op][value]<ENTER>" << endl;
                    cout << "Op: [>,<,~,!]" << endl;
                    cout << "value: GPA value" << endl << endl;
                }
            }
        } while (keepDoing);
    }
}
