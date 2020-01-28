#include <iostream>
#include "Runable.hpp"

Runable::Runable() {}

Runable::Runable(const std::function<std::string(const std::string&, char **)>& run) {
    function = run;
}

std::string Runable::run(const std::string& line, char **env) {
    return function(line, env);
}