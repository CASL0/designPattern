#pragma once
#include "Builder.h"
#include <sstream>

class CHTMLBuilder : public IBuilder{
private:
    std::stringstream m_ssBuffer;
public:
    void makeTitle(const std::string &title) override;
    void makeString(const std::string &str) override;
    void makeItems(const std::vector<std::string>& items) override;
    void close() override;
    std::string getResult();
};