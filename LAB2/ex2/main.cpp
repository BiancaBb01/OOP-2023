#include <iostream>
#include "student.h"
#include "global_functions.h"

int main() {
    Student student1("Ana");
    Student student2("Ion");

    student1.setMathGrade(9);
    student1.setEnglishGrade(8);
    student1.setHistoryGrade(7);

    student2.setMathGrade(8);
    student2.setEnglishGrade(7);
    student2.setHistoryGrade(6);

    std::cout << "Numele studentului 1: " << student1.getName() << std::endl;
    std::cout << "Nota medie a studentului 1: " << student1.getAverageGrade() << std::endl;

    std::cout << "Numele studentului 2: " << student2.getName() << std::endl;
    std::cout << "Nota medie a studentului 2: " << student2.getAverageGrade() << std::endl;

    std::cout << "Comparare dupa nume: " << compareByName(student1, student2) << std::endl;
    std::cout << "Comparare dupa note: " << compareByGrades(student1, student2) << std::endl;
    std::cout << "Comparare dupa medie: " << compareByAverage(student1, student2) << std::endl;

    return 0;
}