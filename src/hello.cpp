#include <iostream>
#include "hello.h"

void hello(int value){
    #ifdef NDEBUG
    std::cout << "Hello World Release! this is number " << value <<std::endl;
    #else
    std::cout << "Hello World Debug!i this is number " << value <<std::endl;
    #endif
}
