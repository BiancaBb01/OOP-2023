#include "MyLibrary.h"
#include <iostream>
#include<ostream>

int main(int argc, char* argv[]) {
    MyLibrary l1(std::cout);

    l1.print_books();

    int l2_ids[] = { 3356, 2213, 5723, 1246, 12573, 6424, 85573, 2235113, 2241 };
    MyLibrary l2(std::cout, 9, l2_ids);
    
    l2.print_books();

    MyLibrary l3(std::cout, 20, 15, 200);
    
    l3.print_books();

    MyLibrary l4(std::cout, "12;13;15;16");
    
    l4.print_books();

    MyLibrary l5(std::cout, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    
    l5.print_books();

    const MyLibrary& l = l5;
   
    std::cout << "Found book number: " << l.get_books_count() << std::endl;
    std::cout << "Found book id: " << l.get_book_id_by_index(3) << std::endl;
    std::cout << "Found book id: " << l.get_book_id_by_index(10) << std::endl;

    l.print_books();

    MyLibrary l6(std::cout, { 5, 10, 15 });
    l6.print_books();

    {
        MyLibrary l2_copy = l2;
        std::cout << "Before update" << std::endl;
       
        std::cout << "Library l2: Book index 0 " << l2.get_book_id_by_index(0) << std::endl;
        
        std::cout << "Library l2_copy: Book index 0 " << l2_copy.get_book_id_by_index(0) << std::endl;

        l2_copy.update_book_id_by_index(0, 20);

        
        std::cout << "Library l2: Book index 0 " << l2.get_book_id_by_index(0) << std::endl;
        
        std::cout << "Library l2_copy: Book index 0 " << l2_copy.get_book_id_by_index(0) << std::endl;

   
    }
}
