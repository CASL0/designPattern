#pragma once
#include "DisplayImpl.h"
#include <string>

class CStringDisplayImpl : public IDisplayImpl{
private:
    std::string m_str;
    int m_width;

public:
    explicit CStringDisplayImpl(std::string str) : m_str(str), m_width(str.length()){}
    void rawOpen() override;
    void rawPrint() override;
    void rawClose() override;
    ~CStringDisplayImpl() = default;

private:
    void printLine();
};