
#pragma once

#include <ostream>
#include <initializer_list>
#include <cstdlib>
#include <ctime>
#include <cstdarg>
#include <cstring>


class MyLibrary {
    std::ostream& output_stream;
    unsigned books_count;
    int* books;
public:
    MyLibrary(std::ostream& output_stream);
    MyLibrary(std::ostream& output_stream, unsigned books_count, int* books);
    MyLibrary(std::ostream& output_stream, unsigned books_count, int min, int max);
    MyLibrary(std::ostream& output_stream, const char* books_values);
    MyLibrary(std::ostream& output_stream, unsigned books_count, ...);
    MyLibrary(std::initializer_list<int> v);
    MyLibrary(const MyLibrary& other); // Constructor de copiere
    MyLibrary(); // Constructor lipsă
    ~MyLibrary();

    void print_books();
    void update_book_id_by_index(unsigned book_index, int book_id);
    unsigned get_books_count();
    int get_book_id_by_index(unsigned index);
};
