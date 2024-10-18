#include <boost/system/error_code.hpp>
#include <iostream>

#include "Utils/TestTool.h"

int main() {
    std::string text ="Hello, world! This is a test string with numbers 123 and 456.";

    std::cout << std::boolalpha << TestTool::isNumeric(text) << std::endl;

    boost::system::error_code ec;
    std::cout << "Error code value: " << ec.value() << std::endl;
    std::cout << "Error message: " << ec.message() << std::endl;

    // 模拟设置一个错误码
    ec = boost::system::errc::make_error_code(boost::system::errc::invalid_argument);
    std::cout << "After setting error code value: " << ec.value() << std::endl;
    std::cout << "After setting error message: " << ec.message() << std::endl;

    return 0;
}