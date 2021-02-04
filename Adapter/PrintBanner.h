#pragma once

#include "Print.h"
#include "Banner.h"

class CPrintBanner : public CBanner, public IPrint{
public:
    explicit CPrintBanner(std::string str) : CBanner(str){};
    void printWeak() override;
    void printStrong() override;
};
