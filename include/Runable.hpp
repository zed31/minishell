#ifndef RUNNABLE_HPP_
#define RUNNABLE_HPP_

#include <functional>

class Runable {
    public:
        Runable();
        Runable(const std::function<std::string(const std::string&, char **)>& run);
        std::string run(const std::string& param, char **env);
    private:
        std::function<std::string(const std::string&, char **)> function;
        
};

#endif /* RUNNABLE_HPP */