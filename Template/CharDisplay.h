#pragma once
#include "AbstractDisplay.h"

class CCharDisplay : public AbstractDisplay{
private:
    char m_ch;

public:
    explicit CCharDisplay(char ch) : m_ch(ch){};
    void open() override;
    void print() override;
    void close() override;
};