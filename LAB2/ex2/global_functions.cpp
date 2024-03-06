#include "global_functions.h"

int compareByName(const Student& s1, const Student& s2) {
    return s1.getName().compare(s2.getName());
}

int compareByGrades(const Student& s1, const Student& s2) {
    float avg1 = s1.getAverageGrade();
    float avg2 = s2.getAverageGrade();

    if (avg1 == avg2)
        return 0;
    else if (avg1 > avg2)
        return 1;
    else
        return -1;
}

int compareByAverage(const Student& s1, const Student& s2) {
    if (s1.getAverageGrade() == s2.getAverageGrade())
        return 0;
    else if (s1.getAverageGrade() > s2.getAverageGrade())
        return 1;
    else
        return -1;
}
