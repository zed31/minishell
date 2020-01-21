#ifndef RUNNABLE_HPP_
#define RUNNABLE_HPP_

#include <functional>

class Runable {
    public:
        Runable(const std::function<std::string(std::string)>& run);
        std::string run(const std::string& param);
    private:
        std::function<std::string(std::string)> function;
        
};

#endif /* RUNNABLE_HPP */