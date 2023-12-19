#include "hello_all.hpp"
#include "hello_few.hpp"
#include <iostream>

void hello_all( void )
{
    hello_few();
    std::cout  << "Hello to all of you!" << std::endl;
    return;
}
