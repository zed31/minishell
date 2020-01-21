#include "Line.hpp"
#include <iostream>
#include <string>

void doSomethingWithNotebook(const std::string& line, char **env __attribute__((unused))) {
    std::cout << "line set to " << line << std::endl;
}

void Line::getline(char **env) {
    while (1) {     
        std::cout << "$> ";
        std::string notebook;
        std::getline(std::cin, notebook);
        doSomethingWithNotebook(notebook, env);
    };
}