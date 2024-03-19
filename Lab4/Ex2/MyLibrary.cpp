
#include "MyLibrary.h"
#include <iostream>

MyLibrary::MyLibrary(std::ostream& output_stream) : output_stream(output_stream), books_count(-1), books(nullptr) {}

MyLibrary::MyLibrary(std::ostream& output_stream, unsigned books_count, int* books) : output_stream(output_stream), books_count(books_count) {
    this->books = new int[books_count];
    for (unsigned i = 0; i < books_count; ++i) {
        this->books[i] = books[i];
    }
}

MyLibrary::MyLibrary(std::ostream& output_stream, unsigned books_count, int min, int max) : output_stream(output_stream), books_count(books_count) {
    this->books = new int[books_count];
    srand(time(nullptr));
    for (unsigned i = 0; i < books_count; ++i) {
        this->books[i] = min + rand() % (max - min);
    }
}

MyLibrary::MyLibrary(std::ostream& output_stream, const char* books_values) : output_stream(output_stream), books_count(0), books(nullptr) {
    const char delimiter[] = ";";
    char* books_copy = strdup(books_values);
    char* token = strtok(books_copy, delimiter);
    while (token != nullptr) {
        ++books_count;
        token = strtok(nullptr, delimiter);
    }
    delete[] books_copy;

    books = new int[books_count];

    books_copy = strdup(books_values);
    token = strtok(books_copy, delimiter);
    for (unsigned i = 0; i < books_count; ++i) {
        books[i] = atoi(token);
        token = strtok(nullptr, delimiter);
    }
    delete[] books_copy;
}

MyLibrary::MyLibrary(std::ostream& output_stream, unsigned books_count, ...) : output_stream(output_stream), books_count(books_count) {
    books = new int[books_count];
    va_list args;
    va_start(args, books_count);
    for (unsigned i = 0; i < books_count; ++i) {
        books[i] = va_arg(args, int);
    }
    va_end(args);
}

MyLibrary::MyLibrary(std::initializer_list<int> v) : output_stream(std::cout), books_count(v.size()) {
    books = new int[books_count];
    int i = 0;
    for (int book_id : v) {
        books[i++] = book_id;
    }
}

MyLibrary::~MyLibrary() {
    delete[] books;
}

void MyLibrary::print_books() {
    output_stream << "Numarul de carti: " << books_count << "\nId-urile cartilor: ";
    if (books_count == 0) {
        output_stream << "-1";
    }
    else {
        for (unsigned i = 0; i < books_count; ++i) {
            output_stream << books[i];
            if (i != books_count - 1) {
                output_stream << "; ";
            }
        }
    }
    output_stream << std::endl;
}

void MyLibrary::update_book_id_by_index(unsigned book_index, int book_id) {
    if (book_index < books_count) {
        books[book_index] = book_id;
    }
}

unsigned MyLibrary::get_books_count() {
    return books_count;
}

int MyLibrary::get_book_id_by_index(unsigned index) {
    if (index < books_count) {
        return books[index];
    }
    return -1;
}
