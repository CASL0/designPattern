#pragma once
#include <string>

class CBanner{
private:
    std::string m_str;
public:
    explicit CBanner(std::string str) : m_str(str){};
    void showWithParen();
    void showWithAster();
};