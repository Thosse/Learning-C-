#include <iostream>
#include "hello_all.hpp"
#include "hello_few.hpp"

int main ( int argc,  char *argv[] )
{
    std::cout << "Hello World!" << std::endl;
    // First argument is the name of the object file
    for (int i = 1; i < argc; i++)
    {
        std::cout << "Hello " << argv[i] << "!" << std::endl;
    }
    hello_all();
    hello_few();
    return 0;
}
