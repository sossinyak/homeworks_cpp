#include "utils.hpp" 
#include <iostream>
#include <stack>
 
std::vector<std::string> SplitString(const std::string& data) {
  std::vector<std::string> elements;
  std::string element = "";
  int flag = 0;
  for (char const& literal: data) {
    if (flag == 0) {
      if (literal == '(') {
        flag = 1;
      } else if (literal != ' ' and literal != '\t') {
        element.push_back(literal);
      } else if (literal == ' ' or literal == '\t') {
        if (!element.empty()) {
          elements.push_back(element);
          element.clear();
        }
      };
    };
    if (flag == 1) {
      if (literal != ')') {
        element.push_back(literal);
      } else if (literal == ')') {
        element.push_back(literal);
        if (!element.empty()) {
          elements.push_back(element);
          element.clear();
        }
        flag = 0;
      };
    };
  };
  if (!element.empty()) {
    elements.push_back(element);
    element.clear();
  }
  return {elements};
};
