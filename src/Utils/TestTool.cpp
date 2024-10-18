#include "TestTool.h"

#include <boost/regex.hpp>
namespace TestTool {
bool isNumeric(const std::string& str) {
  boost::regex numericRegex("^[0-9]+$");
  return boost::regex_match(str, numericRegex);
}
}  // namespace TestTool
