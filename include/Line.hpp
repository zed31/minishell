#ifndef LINE_HPP_
#define LINE_HPP_

#include <string>
#include <vector>

class Line {
public:
    void getline(const std::string& line);
private:
    void add(const std::string& line);
private:
    std::vector<std::string> current;
};

#endif //LINE_HPP_