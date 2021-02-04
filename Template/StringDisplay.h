#pragma once
#include "AbstractDisplay.h"
#include <string>

class CStringDisplay:public AbstractDisplay{
private:
    std::string m_str;
    int m_width;
public:
    explicit CStringDisplay(std::string str) : m_str(str), m_width(str.length()){};
    void open() override;
    void print() override;
    void close() override;
private:
    void printLine();
};