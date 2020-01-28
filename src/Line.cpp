#include "Line.hpp"
#include <iostream>
#include <string>

void Line::doSomethingWithNotebook(const std::string& line, char **env) {
    Runable run{ [&](const std::string& param, char** env) -> std::string { std::cout << env[0] << param << std::endl; return ""; } };
    run.run(env[0], env);
}

void Line::getline(char **env) {
    while (1) {     
        std::cout << "$> ";
        std::string notebook;
        std::getline(std::cin, notebook);
        doSomethingWithNotebook(notebook, env);
    };
}