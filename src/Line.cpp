#include "Line.hpp"
#include <iostream>
#include <string>

void Line::add(const std::string& line ) {
    std::cout << "line is set to: " << line << std::endl;
    current.push_back(line);
}

void Line::getline(const std::string& line) {
    std::string notebook;
    std::cout << line;
    std::getline(std::cin, notebook);
    std::cout << notebook << std::endl;
}