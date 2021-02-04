#pragma once
#include <string>

class Book{
private:
    std::string m_sName;

public:
    Book() : m_sName(std::string()){};
    explicit Book(std::string sName) : m_sName(sName){};
    std::string getName();
};