#include <iostream>
#include "TestTool.h"

int main()
{
    //For test boost
    std::string str = "123";
    std::cout<< std::boolalpha << TestTool::isNumeric(str) << std::endl;
    return 0;
}