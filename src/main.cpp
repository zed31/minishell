#include "Line.hpp"
#include <iostream>

int main(int argc __attribute__((unused)), char **argv __attribute__((unused)), char **env __attribute__((unused))) {
    Line line;
    std::string stdline;
    std::getline(std::cin, stdline);
    std::cout << stdline << std::endl;
    line.getline(stdline);
}