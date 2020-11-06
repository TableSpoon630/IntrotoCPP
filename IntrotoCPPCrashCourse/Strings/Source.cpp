#include <iostream>

int main()
{
    char nulTerm = '\0';
    char name[20] = "Terry Nguyen";
   
    
    std::cout << "Before..." << std::endl;
    std::cout << name << std::endl;
    // idx char
    // 0     T
    // 1     e
    // 2     r
    // 3     r
    // 4     y
    // 5 (space)
    
    name[5] = '\0';
    
    
    std::cout << "After..." << std::endl;
    std::cout << name << std::endl;

   return 0;
}