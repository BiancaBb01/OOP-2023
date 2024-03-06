#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    // Constructor
    Student(const std::string& name);

    // Metode pentru setarea și obținerea numelui
    void setName(const std::string& name);
    std::string getName() const;

    // Metode pentru setarea și obținerea notelor
    void setMathGrade(float grade);
    float getMathGrade() const;
    void setEnglishGrade(float grade);
    float getEnglishGrade() const;
    void setHistoryGrade(float grade);
    float getHistoryGrade() const;

    // Metodă pentru obținerea notei medii
    float getAverageGrade() const;

private:
    std::string name_;
    float mathGrade_;
    float englishGrade_;
    float historyGrade_;
};

#endif // STUDENT_H
