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
