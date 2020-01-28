#ifndef LINE_HPP_
#define LINE_HPP_

#include <string>
#include <vector>
#include "Runable.hpp"

class Line {
public:
    void getline(char **env);
private:
    void doSomethingWithNotebook(const std::string& line, char **env);
private:
    std::vector<std::string> current;
    Runable runner;
};

#endif //LINE_HPP_