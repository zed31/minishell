#include <iostream>
#include "Runable.hpp"

Runable::Runable(const std::function<std::string(std::string)>& run) {
    function = run;
}

std::string Runable::run(const std::string& line) {
    return function(line);
}