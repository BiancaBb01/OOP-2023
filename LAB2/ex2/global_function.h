#pragma once
#ifndef GLOBAL_FUNCTIONS_H
#define GLOBAL_FUNCTIONS_H

#include "student.h"

// Funcții globale pentru compararea a două obiecte Student
int compareByName(const Student& s1, const Student& s2);
int compareByGrades(const Student& s1, const Student& s2);
int compareByAverage(const Student& s1, const Student& s2);

#endif // GLOBAL_FUNCTIONS_H
