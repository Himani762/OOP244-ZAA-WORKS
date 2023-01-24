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