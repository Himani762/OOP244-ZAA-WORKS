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
        int isError = 0, i, maxCount, count;
        cout << "Enter GPA query..." << endl;
        do
        {
            count = 1;
            maxCount = 100;
            cout << "? ";
            cin >> command;
            if (command != '>' && command != '<' &&
                command != '~')
            {
                cout << "Syntax error: ? [Op][value]<ENTER>"
                        "Op: [>,<,~,!]"
                        "value: GPA value"
                     << endl;
                isError = 1;
            }
            else if (command == '<')
            {
                cin >> gpaNum;
                for (i = 0; i < maxCount; i++)
                {
                    if (gpaStudent[i].gpa < gpaNum)
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
                if (command == '!')
                {
                    cout << "Exit the program? (Y)es/(N)o: ";
                    cin >> exitCommand;
                    if (exitCommand == 'y' || exitCommand == 'Y')
                    {
                        cout << "Goodbye!";
                        isError = 0;
                    }
                }
            }
        } while (isError);
    }
}
